/* title-menu-item.c generated by valac 0.11.5, the Vala compiler
 * generated from title-menu-item.vala, do not modify */

/*
Copyright 2010 Canonical Ltd.

Authors:
    Conor Curran <conor.curran@canonical.com>

This program is free software: you can redistribute it and/or modify it 
under the terms of the GNU General Public License version 3, as published 
by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranties of 
MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR 
PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along 
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <glib.h>
#include <glib-object.h>
#include <libdbusmenu-glib/client.h>
#include <libdbusmenu-glib/dbusmenu-glib.h>
#include <libdbusmenu-glib/menuitem-proxy.h>
#include <libdbusmenu-glib/menuitem.h>
#include <libdbusmenu-glib/server.h>
#include <common-defs.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define TYPE_PLAYER_ITEM (player_item_get_type ())
#define PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYER_ITEM, PlayerItem))
#define PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYER_ITEM, PlayerItemClass))
#define IS_PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYER_ITEM))
#define IS_PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYER_ITEM))
#define PLAYER_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYER_ITEM, PlayerItemClass))

typedef struct _PlayerItem PlayerItem;
typedef struct _PlayerItemClass PlayerItemClass;
typedef struct _PlayerItemPrivate PlayerItemPrivate;

#define TYPE_TITLE_MENUITEM (title_menuitem_get_type ())
#define TITLE_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TITLE_MENUITEM, TitleMenuitem))
#define TITLE_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TITLE_MENUITEM, TitleMenuitemClass))
#define IS_TITLE_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TITLE_MENUITEM))
#define IS_TITLE_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TITLE_MENUITEM))
#define TITLE_MENUITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TITLE_MENUITEM, TitleMenuitemClass))

typedef struct _TitleMenuitem TitleMenuitem;
typedef struct _TitleMenuitemClass TitleMenuitemClass;
typedef struct _TitleMenuitemPrivate TitleMenuitemPrivate;

#define TYPE_PLAYER_CONTROLLER (player_controller_get_type ())
#define PLAYER_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYER_CONTROLLER, PlayerController))
#define PLAYER_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYER_CONTROLLER, PlayerControllerClass))
#define IS_PLAYER_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYER_CONTROLLER))
#define IS_PLAYER_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYER_CONTROLLER))
#define PLAYER_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYER_CONTROLLER, PlayerControllerClass))

typedef struct _PlayerController PlayerController;
typedef struct _PlayerControllerClass PlayerControllerClass;
typedef struct _PlayerControllerPrivate PlayerControllerPrivate;

#define TYPE_MPRIS2_CONTROLLER (mpris2_controller_get_type ())
#define MPRIS2_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MPRIS2_CONTROLLER, Mpris2Controller))
#define MPRIS2_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MPRIS2_CONTROLLER, Mpris2ControllerClass))
#define IS_MPRIS2_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MPRIS2_CONTROLLER))
#define IS_MPRIS2_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MPRIS2_CONTROLLER))
#define MPRIS2_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MPRIS2_CONTROLLER, Mpris2ControllerClass))

typedef struct _Mpris2Controller Mpris2Controller;
typedef struct _Mpris2ControllerClass Mpris2ControllerClass;

#define PLAYER_CONTROLLER_TYPE_STATE (player_controller_state_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _PlayerItem {
	DbusmenuMenuitem parent_instance;
	PlayerItemPrivate * priv;
};

struct _PlayerItemClass {
	DbusmenuMenuitemClass parent_class;
};

struct _TitleMenuitem {
	PlayerItem parent_instance;
	TitleMenuitemPrivate * priv;
};

struct _TitleMenuitemClass {
	PlayerItemClass parent_class;
};

struct _PlayerController {
	GObject parent_instance;
	PlayerControllerPrivate * priv;
	gint current_state;
	GeeArrayList* custom_items;
	Mpris2Controller* mpris_bridge;
	gboolean* use_playlists;
};

struct _PlayerControllerClass {
	GObjectClass parent_class;
};

typedef enum  {
	PLAYER_CONTROLLER_STATE_OFFLINE,
	PLAYER_CONTROLLER_STATE_INSTANTIATING,
	PLAYER_CONTROLLER_STATE_READY,
	PLAYER_CONTROLLER_STATE_CONNECTED,
	PLAYER_CONTROLLER_STATE_DISCONNECTED
} PlayerControllerstate;


static gpointer title_menuitem_parent_class = NULL;

GType player_item_get_type (void) G_GNUC_CONST;
GType title_menuitem_get_type (void) G_GNUC_CONST;
enum  {
	TITLE_MENUITEM_DUMMY_PROPERTY
};
GType player_controller_get_type (void) G_GNUC_CONST;
TitleMenuitem* title_menuitem_new (PlayerController* parent);
TitleMenuitem* title_menuitem_construct (GType object_type, PlayerController* parent);
GAppInfo* player_controller_get_app_info (PlayerController* self);
const gchar* player_controller_get_icon_name (PlayerController* self);
static void title_menuitem_real_handle_event (DbusmenuMenuitem* base, const gchar* name, GVariant* input_value, guint timestamp);
PlayerController* player_item_get_owner (PlayerItem* self);
GType mpris2_controller_get_type (void) G_GNUC_CONST;
GType player_controller_state_get_type (void) G_GNUC_CONST;
void player_controller_instantiate (PlayerController* self);
void mpris2_controller_expose (Mpris2Controller* self);
void title_menuitem_toggle_active_triangle (TitleMenuitem* self, gboolean update);
GeeHashSet* title_menuitem_attributes_format (void);


TitleMenuitem* title_menuitem_construct (GType object_type, PlayerController* parent) {
	TitleMenuitem * self = NULL;
	GAppInfo* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	self = (TitleMenuitem*) g_object_new (object_type, "item-type", DBUSMENU_TITLE_MENUITEM_TYPE, "owner", parent, NULL);
	_tmp0_ = player_controller_get_app_info (parent);
	_tmp1_ = g_app_info_get_name (_tmp0_);
	dbusmenu_menuitem_property_set ((DbusmenuMenuitem*) self, DBUSMENU_TITLE_MENUITEM_NAME, _tmp1_);
	_tmp2_ = player_controller_get_icon_name (parent);
	dbusmenu_menuitem_property_set ((DbusmenuMenuitem*) self, DBUSMENU_TITLE_MENUITEM_ICON, _tmp2_);
	dbusmenu_menuitem_property_set_bool ((DbusmenuMenuitem*) self, DBUSMENU_TITLE_MENUITEM_RUNNING, FALSE);
	return self;
}


TitleMenuitem* title_menuitem_new (PlayerController* parent) {
	return title_menuitem_construct (TYPE_TITLE_MENUITEM, parent);
}


static void title_menuitem_real_handle_event (DbusmenuMenuitem* base, const gchar* name, GVariant* input_value, guint timestamp) {
	TitleMenuitem * self;
	PlayerController* _tmp0_ = NULL;
	self = (TitleMenuitem*) base;
	g_return_if_fail (name != NULL);
	g_return_if_fail (input_value != NULL);
	_tmp0_ = player_item_get_owner ((PlayerItem*) self);
	if (_tmp0_->current_state == PLAYER_CONTROLLER_STATE_OFFLINE) {
		PlayerController* _tmp1_ = NULL;
		_tmp1_ = player_item_get_owner ((PlayerItem*) self);
		player_controller_instantiate (_tmp1_);
	} else {
		PlayerController* _tmp2_ = NULL;
		_tmp2_ = player_item_get_owner ((PlayerItem*) self);
		if (_tmp2_->current_state == PLAYER_CONTROLLER_STATE_CONNECTED) {
			PlayerController* _tmp3_ = NULL;
			_tmp3_ = player_item_get_owner ((PlayerItem*) self);
			mpris2_controller_expose (_tmp3_->mpris_bridge);
		}
	}
}


void title_menuitem_toggle_active_triangle (TitleMenuitem* self, gboolean update) {
	g_return_if_fail (self != NULL);
	dbusmenu_menuitem_property_set_bool ((DbusmenuMenuitem*) self, DBUSMENU_TITLE_MENUITEM_RUNNING, update);
}


GeeHashSet* title_menuitem_attributes_format (void) {
	GeeHashSet* result = NULL;
	GeeHashSet* _tmp0_ = NULL;
	GeeHashSet* attrs;
	_tmp0_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL);
	attrs = _tmp0_;
	gee_abstract_collection_add ((GeeAbstractCollection*) attrs, DBUSMENU_TITLE_MENUITEM_NAME);
	gee_abstract_collection_add ((GeeAbstractCollection*) attrs, DBUSMENU_TITLE_MENUITEM_RUNNING);
	gee_abstract_collection_add ((GeeAbstractCollection*) attrs, DBUSMENU_TITLE_MENUITEM_ICON);
	result = attrs;
	return result;
}


static void title_menuitem_class_init (TitleMenuitemClass * klass) {
	title_menuitem_parent_class = g_type_class_peek_parent (klass);
	DBUSMENU_MENUITEM_CLASS (klass)->handle_event = title_menuitem_real_handle_event;
}


static void title_menuitem_instance_init (TitleMenuitem * self) {
}


GType title_menuitem_get_type (void) {
	static volatile gsize title_menuitem_type_id__volatile = 0;
	if (g_once_init_enter (&title_menuitem_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TitleMenuitemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) title_menuitem_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TitleMenuitem), 0, (GInstanceInitFunc) title_menuitem_instance_init, NULL };
		GType title_menuitem_type_id;
		title_menuitem_type_id = g_type_register_static (TYPE_PLAYER_ITEM, "TitleMenuitem", &g_define_type_info, 0);
		g_once_init_leave (&title_menuitem_type_id__volatile, title_menuitem_type_id);
	}
	return title_menuitem_type_id__volatile;
}



