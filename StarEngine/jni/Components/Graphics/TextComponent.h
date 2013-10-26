#pragma once

#include "../../defines.h"
#include "../BaseComponent.h"
#include "../../Graphics/Color.h"
#include <vector>

//[TODO]
/*
Provide more Get/Set functions, so that you can fully manage the fonts from this component
e.g. GetLength , GetWordWrap, SetWordWrap(bool) , ...

FontManager uses positions etc in a strange way. Not like the rest of the engine. 
This causes the scale system not to work in this (yet). This may be fixed when implementing 
the spritebatch system.

Take scaling in to account when drawing (in font manager i suppose)
*/
namespace star
{
	class Font;
	class TextComponent : public BaseComponent
	{
	public:
		TextComponent(const tstring& fileName,const tstring& tag, int fontSize);
		virtual ~TextComponent();

		void Draw();
		virtual void Update(const Context& context);
		void SetText(const tstring& text);
		const tstring& GetText() const;
		void SetColor(const Color& color);
		const Color& GetColor() const;
		//Default set to -1, Set width to -1 to disable wrapping
		void SetWrapWidth(const float& width);
		const float& GetWrapWidth() const;
		
	protected:
		virtual void InitializeComponent();
	
	private:

		int32 m_FontSize;
		tstring m_FileName;
		tstring m_Tag;

		Color m_TextColor;
		int32 m_MaxWidth;
		tstring m_OrigText;
		tstring m_EditedText;

		bool m_bCheckedWrapping;

		tstring CheckWrapping(const Font& font, const tstring& stringIn,const int32& wrapWidth);
		void SplitString(std::vector<tstring>& wordArrayIn,const tstring& stringIn, const tstring& delimiter);


		TextComponent(const TextComponent &);
		TextComponent(TextComponent &&);
		TextComponent & operator=(const TextComponent &);
	};
}