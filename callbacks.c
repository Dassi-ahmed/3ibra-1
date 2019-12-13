#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_Start_clicked                       (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget*window1;
GtkWidget*window2;

window2=create_window2();
gtk_widget_show (window2);
window1=lookup_widget(objet,"window1");
gtk_widget_hide(window1);	

}

