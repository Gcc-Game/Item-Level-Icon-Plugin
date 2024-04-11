# Search:
	def SetItemSlot(self, renderingSlotNumber, ItemIndex, ItemCount = 0, diffuseColor = (1.0, 1.0, 1.0, 1.0)):
		if 0 == ItemIndex or None == ItemIndex:
			wndMgr.ClearSlot(self.hWnd, renderingSlotNumber)
			return

		item.SelectItem(ItemIndex)
		itemIcon = item.GetIconImage()

		item.SelectItem(ItemIndex)
		(width, height) = item.GetItemSize()

		wndMgr.SetSlot(self.hWnd, renderingSlotNumber, ItemIndex, width, height, itemIcon, diffuseColor)
		wndMgr.SetSlotCount(self.hWnd, renderingSlotNumber, ItemCount)

# Add Under:
		if app.ENABLE_ITEM_LEVEL_ICON_PLUGIN:
			itemName=item.GetItemName().strip()
			itemNameP=item.GetItemName().rfind('+')
			if itemNameP>0 and len(itemName)>itemNameP+1:
				level=itemName[itemNameP+1:]
				if level.isdigit():
					wndMgr.SetSlotLevelImage(self.hWnd, renderingSlotNumber, ("icon/level/%d.tga"%int(level)))
