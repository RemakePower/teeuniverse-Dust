/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#include <generated/assets/guiboxstyle.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_GuiBoxStyle::CAsset_GuiBoxStyle()
{
	m_MinWidth = 0;
	m_MinHeight = 0;
	m_Margin = 0;
	m_Padding = 0;
	m_Spacing = 0;
}

void CAsset_GuiBoxStyle::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_GuiBoxStyle& SysType)
{
	CAsset::CTuaType::Read(pLoadingContext, TuaType, SysType);

	SysType.m_MinWidth = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_MinWidth);
	SysType.m_MinHeight = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_MinHeight);
	SysType.m_Margin = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_Margin);
	SysType.m_Padding = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_Padding);
	SysType.m_Spacing = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_Spacing);
	pLoadingContext->ReadAssetPath(TuaType.m_RectPath, SysType.m_RectPath);
}

void CAsset_GuiBoxStyle::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiBoxStyle& SysType, CTuaType& TuaType)
{
	CAsset::CTuaType::Write(pLoadingContext, SysType, TuaType);

	TuaType.m_MinWidth = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_MinWidth);
	TuaType.m_MinHeight = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_MinHeight);
	TuaType.m_Margin = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_Margin);
	TuaType.m_Padding = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_Padding);
	TuaType.m_Spacing = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_Spacing);
	pLoadingContext->WriteAssetPath(SysType.m_RectPath, TuaType.m_RectPath);
}

template<>
int CAsset_GuiBoxStyle::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case MINWIDTH:
			return GetMinWidth();
		case MINHEIGHT:
			return GetMinHeight();
		case MARGIN:
			return GetMargin();
		case PADDING:
			return GetPadding();
		case SPACING:
			return GetSpacing();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiBoxStyle::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case MINWIDTH:
			SetMinWidth(Value);
			return true;
		case MINHEIGHT:
			SetMinHeight(Value);
			return true;
		case MARGIN:
			SetMargin(Value);
			return true;
		case PADDING:
			SetPadding(Value);
			return true;
		case SPACING:
			SetSpacing(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_GuiBoxStyle::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case RECTPATH:
			return GetRectPath();
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiBoxStyle::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case RECTPATH:
			SetRectPath(Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_GuiBoxStyle::AddSubItem(int Type, const CSubPath& SubPath)
{
	return -1;
}

void CAsset_GuiBoxStyle::DeleteSubItem(const CSubPath& SubPath)
{
}

void CAsset_GuiBoxStyle::RelMoveSubItem(const CSubPath& SubPath, int RelMove)
{
}


