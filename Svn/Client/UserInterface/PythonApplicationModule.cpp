// Add Under File:
// "}" add above
// Add Above Fancy Brackets. !!!

#ifdef ENABLE_ITEM_LEVEL_ICON_PLUGIN
	PyModule_AddIntConstant(poModule, "ENABLE_ITEM_LEVEL_ICON_PLUGIN", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_ITEM_LEVEL_ICON_PLUGIN", 0);
#endif
