/*This file is generated by luagen.*/
#include "lua_ftk_image_decoder.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkImageDecoder");
}

static int lua_ftk_image_decoder_match(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkImageDecoder* thiz;
	char* filename;
	int param_ok = tolua_isusertype(L, 1, "FtkImageDecoder", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	filename = tolua_tostring(L, 2, 0);
	retv = ftk_image_decoder_match(thiz, filename);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_image_decoder_decode(lua_State* L)
{
	tolua_Error err = {0};
	FtkBitmap* retv;
	FtkImageDecoder* thiz;
	char* filename;
	int param_ok = tolua_isusertype(L, 1, "FtkImageDecoder", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	filename = tolua_tostring(L, 2, 0);
	retv = ftk_image_decoder_decode(thiz, filename);
	tolua_pushusertype(L, (void*)retv, "FtkBitmap");

	return 1;
}

static int lua_ftk_image_decoder_destroy(lua_State* L)
{
	tolua_Error err = {0};
	FtkImageDecoder* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkImageDecoder", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_image_decoder_destroy(thiz);

	return 1;
}

int tolua_ftk_image_decoder_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkImageDecoder", "FtkImageDecoder", "", NULL);
	tolua_beginmodule(L, "FtkImageDecoder");
	tolua_function(L, "Match", lua_ftk_image_decoder_match);
	tolua_function(L, "Decode", lua_ftk_image_decoder_decode);
	tolua_function(L, "Destroy", lua_ftk_image_decoder_destroy);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}