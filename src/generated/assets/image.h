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

#ifndef __CLIENT_ASSETS_IMAGE__
#define __CLIENT_ASSETS_IMAGE__

#include <shared/assets/asset.h>
#include <shared/tl/array2d.h>
#include <shared/graphics.h>

class CAsset_Image : public CAsset
{
public:
	static const int TypeId = 13;
	
	enum
	{
		TYPE_DATA,
	};
	
	static inline CSubPath SubPath_Data(int Id0, int Id1) { return CSubPath(TYPE_DATA, Id0, Id1, 0); }
	
	enum
	{
		NAME = CAsset::NAME,
		GRIDWIDTH,
		GRIDHEIGHT,
		GRIDSPACING,
		TEXELSIZE,
		TILINGENABLED,
		DATA_WIDTH,
		DATA_HEIGHT,
		DATA_PTR,
		DATA_ARRAY,
		DATA,
		TEXTURE_ID,
		TEXTURE,
	};
	
	class CTuaType : public CAsset::CTuaType
	{
	public:
		tua_int32 m_GridWidth;
		tua_int32 m_GridHeight;
		tua_int32 m_GridSpacing;
		tua_int32 m_TexelSize;
		tua_uint8 m_TilingEnabled;
		CTuaArray2d m_Data;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_Image& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Image& SysType, CTuaType& TuaType);
	};
	

private:
	int m_GridWidth;
	int m_GridHeight;
	int m_GridSpacing;
	int m_TexelSize;
	bool m_TilingEnabled;
	array2d< uint8, allocator_default<uint8> > m_Data;
	CTextureHandle m_Texture;

public:
	vec4 GetColor(int x, int y) const;vec4 Sample(vec2 UV) const;
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int DeleteSubItem(const CSubPath& SubPath);
	
	CAsset_Image();
	void copy(const CAsset_Image& Item)
	{
		CAsset::copy(Item);
		m_GridWidth = Item.m_GridWidth;
		m_GridHeight = Item.m_GridHeight;
		m_GridSpacing = Item.m_GridSpacing;
		m_TexelSize = Item.m_TexelSize;
		m_TilingEnabled = Item.m_TilingEnabled;
		m_Data.copy(Item.m_Data);
		m_Texture = Item.m_Texture;
	}
	
	void transfert(CAsset_Image& Item)
	{
		CAsset::transfert(Item);
		m_GridWidth = Item.m_GridWidth;
		m_GridHeight = Item.m_GridHeight;
		m_GridSpacing = Item.m_GridSpacing;
		m_TexelSize = Item.m_TexelSize;
		m_TilingEnabled = Item.m_TilingEnabled;
		m_Data.transfert(Item.m_Data);
		m_Texture = Item.m_Texture;
	}
	
	inline int GetGridWidth() const { return m_GridWidth; }
	
	inline int GetGridHeight() const { return m_GridHeight; }
	
	inline int GetGridSpacing() const { return m_GridSpacing; }
	
	inline int GetTexelSize() const { return m_TexelSize; }
	
	inline bool GetTilingEnabled() const { return m_TilingEnabled; }
	
	inline int GetDataWidth() const { return m_Data.get_width(); }
	
	inline int GetDataHeight() const { return m_Data.get_height(); }
	
	inline const uint8* GetDataPtr() const { return m_Data.base_ptr(); }
	
	inline const array2d< uint8, allocator_default<uint8> >& GetDataArray() const { return m_Data; }
	inline array2d< uint8, allocator_default<uint8> >& GetDataArray() { return m_Data; }
	
	inline uint8 GetData(const CSubPath& SubPath) const { return m_Data.get_clamp(SubPath.GetId(), SubPath.GetId2()); }
	
	inline CTextureHandle GetTexture() const { return m_Texture; }
	
	inline int GetTextureId() const { return m_Texture.Id(); }
	
	inline void SetGridWidth(int Value) { m_GridWidth = Value; }
	
	inline void SetGridHeight(int Value) { m_GridHeight = Value; }
	
	inline void SetGridSpacing(int Value) { m_GridSpacing = Value; }
	
	inline void SetTexelSize(int Value) { m_TexelSize = Value; }
	
	inline void SetTilingEnabled(bool Value) { m_TilingEnabled = Value; }
	
	inline void SetDataWidth(int Value) { m_Data.resize_width(max(Value, 1)); }
	
	inline void SetDataHeight(int Value) { m_Data.resize_height(max(Value, 1)); }
	
	inline void SetData(const CSubPath& SubPath, uint8 Value) { m_Data.set_clamp(SubPath.GetId(), SubPath.GetId2(), Value); }
	
	inline void SetTexture(CTextureHandle Value) { m_Texture = Value; }
	
	inline void SetTextureId(int Value) { m_Texture.SetId(Value); }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
	}
	
};

template<> int CAsset_Image::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_Image::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> bool CAsset_Image::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const;
template<> bool CAsset_Image::SetValue(int ValueType, const CSubPath& SubPath, bool Value);

#endif
