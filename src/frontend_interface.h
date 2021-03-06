/*
 * Generated by gdbus-codegen 2.50.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __FRONTEND_INTERFACE_H__
#define __FRONTEND_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.openprinting.PrintFrontend */

#define TYPE_PRINT_FRONTEND (print_frontend_get_type ())
#define PRINT_FRONTEND(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_FRONTEND, PrintFrontend))
#define IS_PRINT_FRONTEND(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_FRONTEND))
#define PRINT_FRONTEND_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PRINT_FRONTEND, PrintFrontendIface))

struct _PrintFrontend;
typedef struct _PrintFrontend PrintFrontend;
typedef struct _PrintFrontendIface PrintFrontendIface;

struct _PrintFrontendIface
{
  GTypeInterface parent_iface;

  void (*hide_remote_printers_cups) (
    PrintFrontend *object);

  void (*hide_temporary_printers_cups) (
    PrintFrontend *object);

  void (*refresh_backend) (
    PrintFrontend *object);

  void (*stop_listing) (
    PrintFrontend *object);

  void (*unhide_remote_printers_cups) (
    PrintFrontend *object);

  void (*unhide_temporary_printers_cups) (
    PrintFrontend *object);

};

GType print_frontend_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *print_frontend_interface_info (void);
guint print_frontend_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void print_frontend_emit_refresh_backend (
    PrintFrontend *object);

void print_frontend_emit_stop_listing (
    PrintFrontend *object);

void print_frontend_emit_hide_remote_printers_cups (
    PrintFrontend *object);

void print_frontend_emit_unhide_remote_printers_cups (
    PrintFrontend *object);

void print_frontend_emit_hide_temporary_printers_cups (
    PrintFrontend *object);

void print_frontend_emit_unhide_temporary_printers_cups (
    PrintFrontend *object);



/* ---- */

#define TYPE_PRINT_FRONTEND_PROXY (print_frontend_proxy_get_type ())
#define PRINT_FRONTEND_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_FRONTEND_PROXY, PrintFrontendProxy))
#define PRINT_FRONTEND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PRINT_FRONTEND_PROXY, PrintFrontendProxyClass))
#define PRINT_FRONTEND_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PRINT_FRONTEND_PROXY, PrintFrontendProxyClass))
#define IS_PRINT_FRONTEND_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_FRONTEND_PROXY))
#define IS_PRINT_FRONTEND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PRINT_FRONTEND_PROXY))

typedef struct _PrintFrontendProxy PrintFrontendProxy;
typedef struct _PrintFrontendProxyClass PrintFrontendProxyClass;
typedef struct _PrintFrontendProxyPrivate PrintFrontendProxyPrivate;

struct _PrintFrontendProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PrintFrontendProxyPrivate *priv;
};

struct _PrintFrontendProxyClass
{
  GDBusProxyClass parent_class;
};

GType print_frontend_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PrintFrontendProxy, g_object_unref)
#endif

void print_frontend_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PrintFrontend *print_frontend_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PrintFrontend *print_frontend_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void print_frontend_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PrintFrontend *print_frontend_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PrintFrontend *print_frontend_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PRINT_FRONTEND_SKELETON (print_frontend_skeleton_get_type ())
#define PRINT_FRONTEND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_FRONTEND_SKELETON, PrintFrontendSkeleton))
#define PRINT_FRONTEND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PRINT_FRONTEND_SKELETON, PrintFrontendSkeletonClass))
#define PRINT_FRONTEND_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PRINT_FRONTEND_SKELETON, PrintFrontendSkeletonClass))
#define IS_PRINT_FRONTEND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_FRONTEND_SKELETON))
#define IS_PRINT_FRONTEND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PRINT_FRONTEND_SKELETON))

typedef struct _PrintFrontendSkeleton PrintFrontendSkeleton;
typedef struct _PrintFrontendSkeletonClass PrintFrontendSkeletonClass;
typedef struct _PrintFrontendSkeletonPrivate PrintFrontendSkeletonPrivate;

struct _PrintFrontendSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  PrintFrontendSkeletonPrivate *priv;
};

struct _PrintFrontendSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType print_frontend_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PrintFrontendSkeleton, g_object_unref)
#endif

PrintFrontend *print_frontend_skeleton_new (void);


G_END_DECLS

#endif /* __FRONTEND_INTERFACE_H__ */
