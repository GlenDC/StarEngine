#pragma once
#ifdef _WIN32
#else
#include <android/input.h>
#include <android_native_app_glue.h>
#endif
#include "../../defines.h"
#include <functional>

namespace star
{
	struct Context;

	class BaseGesture
	{
	public:
		BaseGesture();

		virtual ~BaseGesture();
#ifdef _WIN32
		void OnUpdateWinInputStateBase();
#else
		void OnTouchEventBase(AInputEvent* pEvent);
#endif
		virtual void Update(const Context& context);
		void EndUpdate();
		bool CompletedGesture();
		void SetOnCompletedCallback(std::function<void()> callback);

	protected:
#ifdef _WIN32
		virtual void OnUpdateWinInputState();
#else
		virtual void OnTouchEvent(AInputEvent* pEvent);
#endif
		bool m_bCompletedGesture;

	private:
		std::function<void()> m_Callback;

		BaseGesture(const BaseGesture& t);
		BaseGesture(BaseGesture&& t);
		BaseGesture& operator=(const BaseGesture& t);
		BaseGesture& operator=(BaseGesture&& t);
	};
}
