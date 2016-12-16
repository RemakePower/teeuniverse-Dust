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

#include <generated/assets/guirectstyle.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_GuiRectStyle::CAsset_GuiRectStyle()
{
	m_Flags = 0x0;
	m_BackgroundColor = 1.0f;
	m_BackgroundPadding = 0;
	m_BorderColor = 1.0f;
	m_BorderFlags = 0x0;
	m_CornerRadius = 0;
	m_CornerFlags = 0x0;
	m_ImagePadding = 0;
}

void CAsset_GuiRectStyle::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_GuiRectStyle& SysType)
{
	CAsset::CTuaType::Read(pLoadingContext, TuaType, SysType);

	SysType.m_Flags = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_Flags);
	SysType.m_BackgroundColor = pLoadingContext->ArchiveFile()->ReadColor(TuaType.m_BackgroundColor);
	SysType.m_BackgroundPadding = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_BackgroundPadding);
	SysType.m_BorderColor = pLoadingContext->ArchiveFile()->ReadColor(TuaType.m_BorderColor);
	SysType.m_BorderFlags = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_BorderFlags);
	SysType.m_CornerRadius = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CornerRadius);
	SysType.m_CornerFlags = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_CornerFlags);
	SysType.m_ImagePadding = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_ImagePadding);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageTPath, SysType.m_ImageTPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageRPath, SysType.m_ImageRPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageBPath, SysType.m_ImageBPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageLPath, SysType.m_ImageLPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageTRPath, SysType.m_ImageTRPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageBRPath, SysType.m_ImageBRPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageBLPath, SysType.m_ImageBLPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageTLPath, SysType.m_ImageTLPath);
}

void CAsset_GuiRectStyle::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiRectStyle& SysType, CTuaType& TuaType)
{
	CAsset::CTuaType::Write(pLoadingContext, SysType, TuaType);

	TuaType.m_Flags = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_Flags);
	TuaType.m_BackgroundColor = pLoadingContext->ArchiveFile()->WriteColor(SysType.m_BackgroundColor);
	TuaType.m_BackgroundPadding = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_BackgroundPadding);
	TuaType.m_BorderColor = pLoadingContext->ArchiveFile()->WriteColor(SysType.m_BorderColor);
	TuaType.m_BorderFlags = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_BorderFlags);
	TuaType.m_CornerRadius = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CornerRadius);
	TuaType.m_CornerFlags = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_CornerFlags);
	TuaType.m_ImagePadding = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_ImagePadding);
	pLoadingContext->WriteAssetPath(SysType.m_ImageTPath, TuaType.m_ImageTPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageRPath, TuaType.m_ImageRPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageBPath, TuaType.m_ImageBPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageLPath, TuaType.m_ImageLPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageTRPath, TuaType.m_ImageTRPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageBRPath, TuaType.m_ImageBRPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageBLPath, TuaType.m_ImageBLPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageTLPath, TuaType.m_ImageTLPath);
}

template<>
int CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case FLAGS:
			return GetFlags();
		case BORDERFLAGS:
			return GetBorderFlags();
		case CORNERFLAGS:
			return GetCornerFlags();
		case IMAGEPADDING:
			return GetImagePadding();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case FLAGS:
			SetFlags(Value);
			return true;
		case BORDERFLAGS:
			SetBorderFlags(Value);
			return true;
		case CORNERFLAGS:
			SetCornerFlags(Value);
			return true;
		case IMAGEPADDING:
			SetImagePadding(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
float CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const
{
	switch(ValueType)
	{
		case BACKGROUNDPADDING:
			return GetBackgroundPadding();
		case CORNERRADIUS:
			return GetCornerRadius();
	}
	return CAsset::GetValue<float>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, float Value)
{
	switch(ValueType)
	{
		case BACKGROUNDPADDING:
			SetBackgroundPadding(Value);
			return true;
		case CORNERRADIUS:
			SetCornerRadius(Value);
			return true;
	}
	return CAsset::SetValue<float>(ValueType, SubPath, Value);
}

template<>
vec4 CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const
{
	switch(ValueType)
	{
		case BACKGROUNDCOLOR:
			return GetBackgroundColor();
		case BORDERCOLOR:
			return GetBorderColor();
	}
	return CAsset::GetValue<vec4>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value)
{
	switch(ValueType)
	{
		case BACKGROUNDCOLOR:
			SetBackgroundColor(Value);
			return true;
		case BORDERCOLOR:
			SetBorderColor(Value);
			return true;
	}
	return CAsset::SetValue<vec4>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case IMAGETPATH:
			return GetImageTPath();
		case IMAGERPATH:
			return GetImageRPath();
		case IMAGEBPATH:
			return GetImageBPath();
		case IMAGELPATH:
			return GetImageLPath();
		case IMAGETRPATH:
			return GetImageTRPath();
		case IMAGEBRPATH:
			return GetImageBRPath();
		case IMAGEBLPATH:
			return GetImageBLPath();
		case IMAGETLPATH:
			return GetImageTLPath();
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case IMAGETPATH:
			SetImageTPath(Value);
			return true;
		case IMAGERPATH:
			SetImageRPath(Value);
			return true;
		case IMAGEBPATH:
			SetImageBPath(Value);
			return true;
		case IMAGELPATH:
			SetImageLPath(Value);
			return true;
		case IMAGETRPATH:
			SetImageTRPath(Value);
			return true;
		case IMAGEBRPATH:
			SetImageBRPath(Value);
			return true;
		case IMAGEBLPATH:
			SetImageBLPath(Value);
			return true;
		case IMAGETLPATH:
			SetImageTLPath(Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_GuiRectStyle::AddSubItem(int Type, const CSubPath& SubPath)
{
	return -1;
}

void CAsset_GuiRectStyle::DeleteSubItem(const CSubPath& SubPath)
{
}

void CAsset_GuiRectStyle::RelMoveSubItem(const CSubPath& SubPath, int RelMove)
{
}


