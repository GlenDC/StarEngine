#pragma once
#ifdef ANDROID
/*
#include <android_native_app_glue.h>
*/
#endif
#include <map>
#include <memory>
#include "BaseGesture.h"

namespace star
{
	struct WinInputState;

	class GestureManager 
	{
	public:
		GestureManager();
		~GestureManager();
		void Update(const Context& context);
		void EndUpdate();
		void AddGesture(BaseGesture* gesture, const tstring& tag);
		void RemoveGesture(BaseGesture* gesture);
		void RemoveGesture(const tstring& tag);

		template <typename T>
		T* GetGesture(const tstring & name) const;
#ifdef _WIN32
		void OnUpdateWinInputState();
#else
		/*
		//[TODO] Implent new android code (2.0)
		void OnTouchEvent(AInputEvent* pEvent);
		*/
#endif
	private:
		std::map<tstring, BaseGesture*> m_GestureMap;
		float64 m_dTime;
		float64 m_TotalTime;

		GestureManager(const GestureManager& t);
		GestureManager(GestureManager&& t);
		GestureManager& operator=(const GestureManager& t);
		GestureManager& operator=(GestureManager&& t);
	};
}

#include "GestureManager.inl"
