#pragma once

#include "../defines.h"
#include <map>
#include "../Helpers/SpriteSheet.h"

namespace star
{
	class SpriteAnimationManager final
	{
	public:
		~SpriteAnimationManager();

		void AddSpritesheet(const tstring & file,
			DirectoryMode mode = DEFAULT_DIRECTORY_MODE);
		void AddSpritesheet(const tstring & file,
			const tstring & binary_file,
			DirectoryMode mode = DEFAULT_DIRECTORY_MODE);
		const SpriteSheet & GetSpritesheet(const tstring & name) const;
		static SpriteAnimationManager * GetInstance();
		void Clear();

	private:
		static SpriteAnimationManager * m_pManager;
		std::map<tstring, SpriteSheet> m_Spritesheets;

		SpriteAnimationManager();

		SpriteAnimationManager(const SpriteAnimationManager &);
		SpriteAnimationManager(SpriteAnimationManager &&);
		SpriteAnimationManager & operator=(const SpriteAnimationManager &);
		SpriteAnimationManager & operator=(SpriteAnimationManager&&);
	};
}