#include "StyleChanger.h"

namespace StyleChanger 
{
	void UpdateSkin(int Skin) noexcept
	{
		switch (Skin) {
		case 0:
			Styles::NiggaLose();
			break;
		}
	}
}
