#pragma once
#include "UIElement.h"

namespace star
{
	class SpriteSheetComponent;

	class UIAnimatedImage : public UIElement
	{
	public:
		UIAnimatedImage(
			const tstring & name,
			const tstring & filePath,
			const tstring & spritesheet
			);

		UIAnimatedImage(
			const tstring & name,
			const tstring & filePath,
			const tstring & spriteName,
			const tstring & spritesheet
			);

		virtual ~UIAnimatedImage(void);

		virtual void SetHorizontalAlignment(
			HorizontalAlignment alignment,
			bool redefineCenter = true
			);
		virtual void SetVerticalAlignment(
			VerticalAlignment alignment,
			bool redefineCenter = true
			);

		void Play();
		void Restart();
		void Pause();
		void Stop();

		void PushAnimation(
			const tstring & animation,
			const std::function<void()> & callback = nullptr
			);
		void PlayAnimation(
			const tstring & animation,
			const std::function<void()> & callback = nullptr
			);
		void PlayAnimation(
			const tstring & animation,
			int32 startFrame,
			const std::function<void()> & callback = nullptr
			);

		void PlayNextAnimation();
		void PlayNextAnimation(int32 startFrame);
		void Reset();

		void SetSpritesheet(const tstring & spritesheet);

		tstring GetCurrentAnimation() const;
		const tstring & GetCurrentSpritesheet() const;

		int32 GetCurrentFrame() const;

		int32 GetFramesHorizontal() const;
		int32 GetFramesVertical() const;
		int32 GetWidth() const;
		int32 GetHeight() const;

		void SetCallbackAnimations(const std::function<void()> & callback);

		bool IsPlaying();

	protected:
		SpriteSheetComponent * m_pSprite;

	private:
		UIAnimatedImage(const UIAnimatedImage &);
		UIAnimatedImage(UIAnimatedImage &&);
		UIAnimatedImage & operator=(const UIAnimatedImage &);
		UIAnimatedImage & operator=(UIAnimatedImage &&);
	};
}
