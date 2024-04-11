// Search:
				CGraphicImageInstance * pInstance;

// Add Under:
#ifdef ENABLE_ITEM_LEVEL_ICON_PLUGIN
				CGraphicImageInstance* pInstanceLevel;
#endif

// Search:
			void Destroy();

// Add Under:
#ifdef ENABLE_ITEM_LEVEL_ICON_PLUGIN
			void SetSlotLevelImage(DWORD dwIndex, CGraphicImage* levelImage);
#endif
