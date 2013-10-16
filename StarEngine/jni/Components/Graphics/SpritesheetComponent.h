#pragma once

#include "SpriteComponent.h"
#include <list>
#include "../../Helpers/SpriteAnimation.h"
#include "../../Helpers/Spritesheet.h"

namespace star
{
	class SpritesheetComponent final : public SpriteComponent
	{
	public:
		SpritesheetComponent(const tstring& filePath, const tstring& spriteName, const tstring & spritesheet);
		~SpritesheetComponent();

		void Update(const Context& context);

		void Play();
		void Restart();
		void Pause();
		void Stop();

		void PushAnimation(const tstring & animation);
		void PlayAnimation(const tstring & animation);

		void PlayNextAnimation();

		void Reset();

		void SetSpritesheet(const tstring & spritesheet);

		tstring GetCurrentAnimation() const;
		const tstring & GetcurrentSpritesheet() const;

	protected:
		void InitializeComponent();
		tstring m_SpritesheetName;
		Spritesheet m_Spritesheet;

		std::list<SpriteAnimation> m_Animations;

	private:
		SpritesheetComponent(const SpritesheetComponent &);
		SpritesheetComponent(SpritesheetComponent &&);
		SpritesheetComponent & operator=(const SpritesheetComponent &);
	};
}