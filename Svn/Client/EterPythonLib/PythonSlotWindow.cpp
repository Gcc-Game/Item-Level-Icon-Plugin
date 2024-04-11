// Search:
void CSlotWindow::AppendSlot(DWORD dwIndex, int ixPosition, int iyPosition, int ixCellSize, int iyCellSize)
{
	TSlot Slot;
	Slot.pInstance = NULL;
	Slot.pNumberLine = NULL;
	Slot.pCoverButton = NULL;
	Slot.pSlotButton = NULL;
	Slot.pSignImage = NULL;
	Slot.pFinishCoolTimeEffect = NULL;

// Add Under:
#ifdef ENABLE_ITEM_LEVEL_ICON_PLUGIN
	Slot.pInstanceLevel = NULL;
#endif


// Search:
void CSlotWindow::SetSlotCount(DWORD dwIndex, DWORD dwCount)

// Add Above:
#ifdef ENABLE_ITEM_LEVEL_ICON_PLUGIN
void CSlotWindow::SetSlotLevelImage(DWORD dwIndex, CGraphicImage* levelImage)
{
	TSlot* pSlot;
	if (!GetSlotPointer(dwIndex, &pSlot) || !levelImage)
		return;
	assert(NULL == pSlot->pInstanceLevel);
	pSlot->pInstanceLevel = CGraphicImageInstance::New();
	pSlot->pInstanceLevel->SetDiffuseColor(1.0, 1.0, 1.0, 1.0);
	pSlot->pInstanceLevel->SetImagePointer(levelImage);
}
#endif


// Search:
	pSlot->isItem = FALSE;
	pSlot->dwState = 0;
	pSlot->fCoolTime = 0.0f;
	pSlot->fStartCoolTime = 0.0f;
	pSlot->dwCenterSlotNumber = 0xffffffff;

// Add Under:
#ifdef ENABLE_ITEM_LEVEL_ICON_PLUGIN
	if (pSlot->pInstanceLevel)
	{
		CGraphicImageInstance::Delete(pSlot->pInstanceLevel);
		pSlot->pInstanceLevel = NULL;
	}
#endif


// Search:
		if (rSlot.bActive)

// Add Above: (Do the same process for all of them !!!!)
#ifdef ENABLE_ITEM_LEVEL_ICON_PLUGIN
		if (rSlot.pInstanceLevel)
		{
			rSlot.pInstanceLevel->SetPosition(m_rect.left + rSlot.ixPosition, (m_rect.top + rSlot.iyPosition + rSlot.byyPlacedItemSize * ITEM_HEIGHT) - 32);
			rSlot.pInstanceLevel->Render();
		}
#endif
