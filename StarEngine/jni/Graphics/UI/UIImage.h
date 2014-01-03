#pragma once
#include "UIElement.h"
#include "../Color.h"

namespace star
{
	class SpriteComponent;

	class UIImage : public UIElement
	{
	public:
		UIImage(
			const tstring & name,
			const tstring & filePath,
			uint32 horizontalSegements = 1,
			uint32 verticalSegments = 1
			);

		UIImage(
			const tstring & name,
			const tstring & filePath,
			const tstring & spriteName,
			uint32 horizontalSegements = 1,
			uint32 verticalSegments = 1
			);

		virtual ~UIImage(void);

		virtual void SetHorizontalAlignment(
			HorizontalAlignment alignment,
			bool redefineCenter = true
			);
		virtual void SetVerticalAlignment(
			VerticalAlignment alignment,
			bool redefineCenter = true
			);

		void SetCurrentSegement(uint32 segmentX, uint32 segmentY);

		void SetColorMultiplier(const Color & color);

		virtual vec2 GetDimensions() const;

	protected:
		SpriteComponent * m_pSprite;

	private:
		UIImage(const UIImage &);
		UIImage(UIImage &&);
		UIImage & operator=(const UIImage &);
		UIImage & operator=(UIImage &&);
	};
}
