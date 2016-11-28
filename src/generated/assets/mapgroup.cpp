/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverses.
 * 
 * TeeUniverses is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverses is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverses.  If not, see <http://www.gnu.org/licenses/>.
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

#include <generated/assets/mapgroup.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_MapGroup::CAsset_MapGroup()
{
	m_Position = vec2(0.0f, 0.0f);
	m_HardParallax = vec2(1.0f, 1.0f);
	m_Clipping = false;
	m_ClipPosition = vec2(0.0f, 0.0f);
	m_ClipSize = vec2(64.0f, 64.0f);
	m_Visibility = true;
}

void CAsset_MapGroup::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapGroup& SysType)
{
	CAsset::CTuaType::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_ParentPath, SysType.m_ParentPath);
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Layer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Layer.m_Size);
		SysType.m_Layer.resize(Size);
		for(int i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_Layer[i]);
		}
	}
	
	SysType.m_Position.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Position.m_X);
	SysType.m_Position.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Position.m_Y);
	SysType.m_HardParallax.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_HardParallax.m_X);
	SysType.m_HardParallax.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_HardParallax.m_Y);
	SysType.m_Clipping = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_Clipping);
	SysType.m_ClipPosition.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_ClipPosition.m_X);
	SysType.m_ClipPosition.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_ClipPosition.m_Y);
	SysType.m_ClipSize.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_ClipSize.m_X);
	SysType.m_ClipSize.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_ClipSize.m_Y);
	SysType.m_Visibility = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_Visibility);
}

void CAsset_MapGroup::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapGroup& SysType, CTuaType& TuaType)
{
	CAsset::CTuaType::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_ParentPath, TuaType.m_ParentPath);
	{
		TuaType.m_Layer.m_Size = SysType.m_Layer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_Layer.size()];
		for(int i=0; i<SysType.m_Layer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_Layer[i], pData[i]);
		}
		TuaType.m_Layer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_Layer.size());
		delete[] pData;
	}
	TuaType.m_Position.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Position.x);
	TuaType.m_Position.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Position.y);
	TuaType.m_HardParallax.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_HardParallax.x);
	TuaType.m_HardParallax.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_HardParallax.y);
	TuaType.m_Clipping = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_Clipping);
	TuaType.m_ClipPosition.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_ClipPosition.x);
	TuaType.m_ClipPosition.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_ClipPosition.y);
	TuaType.m_ClipSize.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_ClipSize.x);
	TuaType.m_ClipSize.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_ClipSize.y);
	TuaType.m_Visibility = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_Visibility);
}

template<>
int CAsset_MapGroup::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case LAYER_ARRAYSIZE:
			return GetLayerArraySize();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapGroup::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case LAYER_ARRAYSIZE:
			SetLayerArraySize(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
bool CAsset_MapGroup::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const
{
	switch(ValueType)
	{
		case CLIPPING:
			return GetClipping();
		case VISIBILITY:
			return GetVisibility();
	}
	return CAsset::GetValue<bool>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapGroup::SetValue(int ValueType, const CSubPath& SubPath, bool Value)
{
	switch(ValueType)
	{
		case CLIPPING:
			SetClipping(Value);
			return true;
		case VISIBILITY:
			SetVisibility(Value);
			return true;
	}
	return CAsset::SetValue<bool>(ValueType, SubPath, Value);
}

template<>
float CAsset_MapGroup::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const
{
	switch(ValueType)
	{
		case POSITION_X:
			return GetPositionX();
		case POSITION_Y:
			return GetPositionY();
		case HARDPARALLAX_X:
			return GetHardParallaxX();
		case HARDPARALLAX_Y:
			return GetHardParallaxY();
		case CLIPPOSITION_X:
			return GetClipPositionX();
		case CLIPPOSITION_Y:
			return GetClipPositionY();
		case CLIPSIZE_X:
			return GetClipSizeX();
		case CLIPSIZE_Y:
			return GetClipSizeY();
	}
	return CAsset::GetValue<float>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapGroup::SetValue(int ValueType, const CSubPath& SubPath, float Value)
{
	switch(ValueType)
	{
		case POSITION_X:
			SetPositionX(Value);
			return true;
		case POSITION_Y:
			SetPositionY(Value);
			return true;
		case HARDPARALLAX_X:
			SetHardParallaxX(Value);
			return true;
		case HARDPARALLAX_Y:
			SetHardParallaxY(Value);
			return true;
		case CLIPPOSITION_X:
			SetClipPositionX(Value);
			return true;
		case CLIPPOSITION_Y:
			SetClipPositionY(Value);
			return true;
		case CLIPSIZE_X:
			SetClipSizeX(Value);
			return true;
		case CLIPSIZE_Y:
			SetClipSizeY(Value);
			return true;
	}
	return CAsset::SetValue<float>(ValueType, SubPath, Value);
}

template<>
vec2 CAsset_MapGroup::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const
{
	switch(ValueType)
	{
		case POSITION:
			return GetPosition();
		case HARDPARALLAX:
			return GetHardParallax();
		case CLIPPOSITION:
			return GetClipPosition();
		case CLIPSIZE:
			return GetClipSize();
	}
	return CAsset::GetValue<vec2>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapGroup::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value)
{
	switch(ValueType)
	{
		case POSITION:
			SetPosition(Value);
			return true;
		case HARDPARALLAX:
			SetHardParallax(Value);
			return true;
		case CLIPPOSITION:
			SetClipPosition(Value);
			return true;
		case CLIPSIZE:
			SetClipSize(Value);
			return true;
	}
	return CAsset::SetValue<vec2>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_MapGroup::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case PARENTPATH:
			return GetParentPath();
		case LAYER:
			return GetLayer(SubPath);
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapGroup::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case PARENTPATH:
			SetParentPath(Value);
			return true;
		case LAYER:
			SetLayer(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_MapGroup::AddSubItem(int Type, const CSubPath& SubPath)
{
	switch(Type)
	{
		case TYPE_LAYER:
			return AddLayer();
	}
	return -1;
}


