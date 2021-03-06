/*
 * Generated by gdbus-codegen 2.50.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __BACKEND_INTERFACE_H__
#define __BACKEND_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.openprinting.PrintBackend */

#define TYPE_PRINT_BACKEND (print_backend_get_type ())
#define PRINT_BACKEND(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_BACKEND, PrintBackend))
#define IS_PRINT_BACKEND(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_BACKEND))
#define PRINT_BACKEND_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PRINT_BACKEND, PrintBackendIface))

struct _PrintBackend;
typedef struct _PrintBackend PrintBackend;
typedef struct _PrintBackendIface PrintBackendIface;

struct _PrintBackendIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_activate_backend) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_apply_settings) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_check_color) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    const gchar *arg_color_mode);

  gboolean (*handle_check_media) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    const gchar *arg_media_name);

  gboolean (*handle_check_orientation) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    const gchar *arg_orientation);

  gboolean (*handle_check_quality) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    const gchar *arg_quality);

  gboolean (*handle_check_resolution) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    gint arg_x_res,
    gint arg_y_res);

  gboolean (*handle_get_all_attributes) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_default_color) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_default_media) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_default_orientation) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_default_printer) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_default_resolution) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_default_value) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    const gchar *arg_option_name);

  gboolean (*handle_get_page_range) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_printer_capabilities) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_printer_state) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_quality) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_supported_color) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_supported_media) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_supported_orientation) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_supported_quality) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_supported_resolution) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_get_supported_values_raw_string) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    const gchar *arg_option_name);

  gboolean (*handle_is_accepting_jobs) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_list_basic_options) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  gboolean (*handle_ping) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  void (*printer_added) (
    PrintBackend *object,
    const gchar *arg_printer_name,
    const gchar *arg_printer_info,
    const gchar *arg_printer_location,
    const gchar *arg_printer_make_and_model,
    const gchar *arg_printer_uri,
    gboolean arg_printer_is_accepting_jobs,
    const gchar *arg_printer_state);

  void (*printer_removed) (
    PrintBackend *object,
    const gchar *arg_printer_name);

};

GType print_backend_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *print_backend_interface_info (void);
guint print_backend_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void print_backend_complete_activate_backend (
    PrintBackend *object,
    GDBusMethodInvocation *invocation);

void print_backend_complete_get_default_printer (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *printer_name);

void print_backend_complete_list_basic_options (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *printer_info,
    const gchar *printer_location,
    const gchar *printer_make_and_model,
    gboolean printer_is_accepting_jobs,
    const gchar *printer_state);

void print_backend_complete_get_printer_state (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *state);

void print_backend_complete_is_accepting_jobs (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gboolean is_accepting);

void print_backend_complete_get_printer_capabilities (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gboolean copies,
    gboolean media,
    gboolean number_up,
    gboolean orientation,
    gboolean color_mode,
    gboolean print_quality,
    gboolean sides,
    gboolean resolution);

void print_backend_complete_get_all_attributes (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gint num_attributes,
    GVariant *attributes);

void print_backend_complete_get_default_media (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *media_name);

void print_backend_complete_get_supported_media (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gint num_values,
    GVariant *values);

void print_backend_complete_get_default_orientation (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *orientation);

void print_backend_complete_get_supported_orientation (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gint num_values,
    GVariant *values);

void print_backend_complete_get_default_resolution (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *resolution);

void print_backend_complete_get_supported_resolution (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gint num_values,
    GVariant *values);

void print_backend_complete_get_default_color (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *color_mode);

void print_backend_complete_get_supported_color (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gint num_values,
    GVariant *values);

void print_backend_complete_ping (
    PrintBackend *object,
    GDBusMethodInvocation *invocation);

void print_backend_complete_get_default_value (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *option_value);

void print_backend_complete_get_supported_values_raw_string (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gint num_values,
    GVariant *option_values);

void print_backend_complete_get_supported_quality (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gint num_values,
    GVariant *values);

void print_backend_complete_check_resolution (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gboolean possible);

void print_backend_complete_check_media (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gboolean possible);

void print_backend_complete_check_orientation (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gboolean possible);

void print_backend_complete_get_page_range (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    GVariant *ranges);

void print_backend_complete_get_quality (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *quality);

void print_backend_complete_check_quality (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gboolean possible);

void print_backend_complete_check_color (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    gboolean possible);

void print_backend_complete_apply_settings (
    PrintBackend *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void print_backend_emit_printer_added (
    PrintBackend *object,
    const gchar *arg_printer_name,
    const gchar *arg_printer_info,
    const gchar *arg_printer_location,
    const gchar *arg_printer_make_and_model,
    const gchar *arg_printer_uri,
    gboolean arg_printer_is_accepting_jobs,
    const gchar *arg_printer_state);

void print_backend_emit_printer_removed (
    PrintBackend *object,
    const gchar *arg_printer_name);



/* D-Bus method calls: */
void print_backend_call_activate_backend (
    PrintBackend *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_activate_backend_finish (
    PrintBackend *proxy,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_activate_backend_sync (
    PrintBackend *proxy,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_default_printer (
    PrintBackend *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_default_printer_finish (
    PrintBackend *proxy,
    gchar **out_printer_name,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_default_printer_sync (
    PrintBackend *proxy,
    gchar **out_printer_name,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_list_basic_options (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_list_basic_options_finish (
    PrintBackend *proxy,
    gchar **out_printer_info,
    gchar **out_printer_location,
    gchar **out_printer_make_and_model,
    gboolean *out_printer_is_accepting_jobs,
    gchar **out_printer_state,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_list_basic_options_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gchar **out_printer_info,
    gchar **out_printer_location,
    gchar **out_printer_make_and_model,
    gboolean *out_printer_is_accepting_jobs,
    gchar **out_printer_state,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_printer_state (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_printer_state_finish (
    PrintBackend *proxy,
    gchar **out_state,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_printer_state_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gchar **out_state,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_is_accepting_jobs (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_is_accepting_jobs_finish (
    PrintBackend *proxy,
    gboolean *out_is_accepting,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_is_accepting_jobs_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gboolean *out_is_accepting,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_printer_capabilities (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_printer_capabilities_finish (
    PrintBackend *proxy,
    gboolean *out_copies,
    gboolean *out_media,
    gboolean *out_number_up,
    gboolean *out_orientation,
    gboolean *out_color_mode,
    gboolean *out_print_quality,
    gboolean *out_sides,
    gboolean *out_resolution,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_printer_capabilities_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gboolean *out_copies,
    gboolean *out_media,
    gboolean *out_number_up,
    gboolean *out_orientation,
    gboolean *out_color_mode,
    gboolean *out_print_quality,
    gboolean *out_sides,
    gboolean *out_resolution,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_all_attributes (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_all_attributes_finish (
    PrintBackend *proxy,
    gint *out_num_attributes,
    GVariant **out_attributes,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_all_attributes_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint *out_num_attributes,
    GVariant **out_attributes,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_default_media (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_default_media_finish (
    PrintBackend *proxy,
    gchar **out_media_name,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_default_media_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gchar **out_media_name,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_supported_media (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_supported_media_finish (
    PrintBackend *proxy,
    gint *out_num_values,
    GVariant **out_values,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_supported_media_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint *out_num_values,
    GVariant **out_values,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_default_orientation (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_default_orientation_finish (
    PrintBackend *proxy,
    gchar **out_orientation,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_default_orientation_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gchar **out_orientation,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_supported_orientation (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_supported_orientation_finish (
    PrintBackend *proxy,
    gint *out_num_values,
    GVariant **out_values,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_supported_orientation_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint *out_num_values,
    GVariant **out_values,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_default_resolution (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_default_resolution_finish (
    PrintBackend *proxy,
    gchar **out_resolution,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_default_resolution_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gchar **out_resolution,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_supported_resolution (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_supported_resolution_finish (
    PrintBackend *proxy,
    gint *out_num_values,
    GVariant **out_values,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_supported_resolution_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint *out_num_values,
    GVariant **out_values,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_default_color (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_default_color_finish (
    PrintBackend *proxy,
    gchar **out_color_mode,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_default_color_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gchar **out_color_mode,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_supported_color (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_supported_color_finish (
    PrintBackend *proxy,
    gint *out_num_values,
    GVariant **out_values,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_supported_color_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint *out_num_values,
    GVariant **out_values,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_ping (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_ping_finish (
    PrintBackend *proxy,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_ping_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_default_value (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_option_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_default_value_finish (
    PrintBackend *proxy,
    gchar **out_option_value,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_default_value_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_option_name,
    gchar **out_option_value,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_supported_values_raw_string (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_option_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_supported_values_raw_string_finish (
    PrintBackend *proxy,
    gint *out_num_values,
    GVariant **out_option_values,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_supported_values_raw_string_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_option_name,
    gint *out_num_values,
    GVariant **out_option_values,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_supported_quality (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_supported_quality_finish (
    PrintBackend *proxy,
    gint *out_num_values,
    GVariant **out_values,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_supported_quality_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint *out_num_values,
    GVariant **out_values,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_check_resolution (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint arg_x_res,
    gint arg_y_res,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_check_resolution_finish (
    PrintBackend *proxy,
    gboolean *out_possible,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_check_resolution_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gint arg_x_res,
    gint arg_y_res,
    gboolean *out_possible,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_check_media (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_media_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_check_media_finish (
    PrintBackend *proxy,
    gboolean *out_possible,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_check_media_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_media_name,
    gboolean *out_possible,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_check_orientation (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_orientation,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_check_orientation_finish (
    PrintBackend *proxy,
    gboolean *out_possible,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_check_orientation_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_orientation,
    gboolean *out_possible,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_page_range (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_page_range_finish (
    PrintBackend *proxy,
    GVariant **out_ranges,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_page_range_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GVariant **out_ranges,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_quality (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_quality_finish (
    PrintBackend *proxy,
    gchar **out_quality,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_quality_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    gchar **out_quality,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_check_quality (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_quality,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_check_quality_finish (
    PrintBackend *proxy,
    gboolean *out_possible,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_check_quality_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_quality,
    gboolean *out_possible,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_check_color (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_color_mode,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_check_color_finish (
    PrintBackend *proxy,
    gboolean *out_possible,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_check_color_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_color_mode,
    gboolean *out_possible,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_apply_settings (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_apply_settings_finish (
    PrintBackend *proxy,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_apply_settings_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_PRINT_BACKEND_PROXY (print_backend_proxy_get_type ())
#define PRINT_BACKEND_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_BACKEND_PROXY, PrintBackendProxy))
#define PRINT_BACKEND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PRINT_BACKEND_PROXY, PrintBackendProxyClass))
#define PRINT_BACKEND_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PRINT_BACKEND_PROXY, PrintBackendProxyClass))
#define IS_PRINT_BACKEND_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_BACKEND_PROXY))
#define IS_PRINT_BACKEND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PRINT_BACKEND_PROXY))

typedef struct _PrintBackendProxy PrintBackendProxy;
typedef struct _PrintBackendProxyClass PrintBackendProxyClass;
typedef struct _PrintBackendProxyPrivate PrintBackendProxyPrivate;

struct _PrintBackendProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PrintBackendProxyPrivate *priv;
};

struct _PrintBackendProxyClass
{
  GDBusProxyClass parent_class;
};

GType print_backend_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PrintBackendProxy, g_object_unref)
#endif

void print_backend_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PrintBackend *print_backend_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PrintBackend *print_backend_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void print_backend_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PrintBackend *print_backend_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PrintBackend *print_backend_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PRINT_BACKEND_SKELETON (print_backend_skeleton_get_type ())
#define PRINT_BACKEND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_BACKEND_SKELETON, PrintBackendSkeleton))
#define PRINT_BACKEND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PRINT_BACKEND_SKELETON, PrintBackendSkeletonClass))
#define PRINT_BACKEND_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PRINT_BACKEND_SKELETON, PrintBackendSkeletonClass))
#define IS_PRINT_BACKEND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_BACKEND_SKELETON))
#define IS_PRINT_BACKEND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PRINT_BACKEND_SKELETON))

typedef struct _PrintBackendSkeleton PrintBackendSkeleton;
typedef struct _PrintBackendSkeletonClass PrintBackendSkeletonClass;
typedef struct _PrintBackendSkeletonPrivate PrintBackendSkeletonPrivate;

struct _PrintBackendSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  PrintBackendSkeletonPrivate *priv;
};

struct _PrintBackendSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType print_backend_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PrintBackendSkeleton, g_object_unref)
#endif

PrintBackend *print_backend_skeleton_new (void);


G_END_DECLS

#endif /* __BACKEND_INTERFACE_H__ */
