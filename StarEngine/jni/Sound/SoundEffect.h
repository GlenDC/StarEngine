#pragma once

#include "BaseSound.h"

namespace star
{
	const int32 MAX_SAMPLES = 2;

	class SoundEffect : public BaseSound
	{
	public:
		SoundEffect(const tstring& path, uint8 channel = 0);
		~SoundEffect();

		virtual void Play(int32 loopTime = 0);
		virtual void Stop();
		virtual void Pause();
		virtual void Resume();

		virtual void SetChannel(uint8 channel);
		virtual void UnsetChannel();

	#ifdef ANDROID
		/*
		//[TODO] Implent new android code (2.0)
		void SetVolume(float32 volume);
		*/
	#endif
		float32 GetVolume() const;

		void SetMuted(bool muted);
		bool IsMuted() const;

	private:
#ifdef DESKTOP
		void SetSoundVolume(int32 volume);

		//static int32 PLAY_CHANNELS;
		std::vector<int32> mPlayChannels;
		Mix_Chunk * mpSound;
#else
		/*
		//[TODO] Implent new android code (2.0)
		void RegisterCallback(SLPlayItf & player);

		static void MusicStoppedCallback(
			SLPlayItf caller,
			void *pContext,
			SLuint32 event
			);

		std::vector<SLObjectItf> mPlayerObjs;
		//SLObjectItf mPlayerObj;
		std::vector<SLPlayItf> mPlayers;
		std::vector<int32> mLoopTimes;
		*/
#endif	

		SoundEffect(const SoundEffect& yRef);
		SoundEffect(SoundEffect&& yRef);
		SoundEffect& operator=(const SoundEffect& yRef);
		SoundEffect& operator=(SoundEffect&& yRef);
	};
}
