#pragma once

#include <map>
#include <memory>
#include "../defines.h"

#ifdef DESKTOP
#include <glew.h>
#else
/*
//[TODO] Implent new android code (2.0)
#include "GLES/gl.h"
*/
#endif

namespace star
{
	class Texture2D;

	class TextureManager final
	{
	public:
		~TextureManager();

		static TextureManager * GetInstance();

		void LoadTexture(const tstring& path, const tstring& name);
		bool DeleteTexture(const tstring& name);
		GLuint GetTextureID(const tstring& name);
		ivec2 GetTextureDimensions(const tstring& name);
		void EraseAllTextures();
		bool ReloadAllTextures();

	private:
		static TextureManager * mTextureManager;
		std::map<tstring, std::shared_ptr<Texture2D>> mTextureMap;
		std::map<tstring,tstring> mPathList;

		TextureManager();

		TextureManager(const TextureManager& yRef);
		TextureManager(TextureManager&& yRef);
		TextureManager& operator=(const TextureManager& yRef);
		TextureManager& operator=(TextureManager&& yRef);
	};
}
