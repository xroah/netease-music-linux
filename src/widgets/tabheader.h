#ifndef TABHEADER_H_
#define TABHEADER_H_

#include <gtk/gtk.h>

#define TAB_HEADER_TYPE tab_header_get_type()
#define TAB_HEADER(obj) G_TYPE_CHECK_INSTANCE_CAST(obj, TAB_HEADER_TYPE, TabHeader)
#define TAB_HEADER_CLASS(kclass) G_TYPE_CHECK_CLASS_CAST(kclass, TAB_HEADER_TYPE, TabHeaderClass)
#define IS_TAB_HEADER(obj) G_TYPE_CHECK_INSTANCE_TYPE(obj, TAB_HEADER_TYPE)
#define IS_TAB_HEADER_CLASS(kclass) G_TYPE_CHECK_CLASS_TYPE(kclass, TAB_HEADER_TYPE)

typedef struct _TabHeader
{
    GtkEventBox event_box;

    GtkWidget *box;
    GtkWidget *icon;
    GtkWidget *close_btn;
    GtkWidget *title;
} TabHeader;

typedef struct _TabHeaderClass
{
    GtkBoxClass parent_class;

    void (*tab_header)(TabHeader *);
} TabHeaderClass;

GType tab_header_get_type(void);
GtkWidget* tab_header_new(void);
void tab_header_clear(TabHeader *);

#endif // TABHEADER_H_