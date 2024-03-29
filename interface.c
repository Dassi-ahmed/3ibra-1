/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *notebook2;
  GtkWidget *empty_notebook_page;
  GtkWidget *label1;
  GtkWidget *scrolledwindow1;
  GtkWidget *treeview1;
  GtkWidget *label2;
  GtkWidget *scrolledwindow2;
  GtkWidget *treeview2;
  GtkWidget *label3;
  GtkWidget *notebook3;
  GtkWidget *scrolledwindow3;
  GtkWidget *treeview3;
  GtkWidget *label6;
  GtkWidget *scrolledwindow4;
  GtkWidget *treeview4;
  GtkWidget *label7;
  GtkWidget *label4;
  GtkWidget *button1;
  GtkWidget *label5;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  notebook2 = gtk_notebook_new ();
  gtk_widget_show (notebook2);
  gtk_container_add (GTK_CONTAINER (window1), notebook2);

  empty_notebook_page = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (empty_notebook_page);
  gtk_container_add (GTK_CONTAINER (notebook2), empty_notebook_page);

  label1 = gtk_label_new (_("Profile"));
  gtk_widget_show (label1);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 0), label1);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_container_add (GTK_CONTAINER (notebook2), scrolledwindow1);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_SHADOW_IN);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), treeview1);

  label2 = gtk_label_new (_("Validation"));
  gtk_widget_show (label2);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 1), label2);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow2);
  gtk_container_add (GTK_CONTAINER (notebook2), scrolledwindow2);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow2), GTK_SHADOW_IN);

  treeview2 = gtk_tree_view_new ();
  gtk_widget_show (treeview2);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), treeview2);

  label3 = gtk_label_new (_("Reclamation"));
  gtk_widget_show (label3);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 2), label3);

  notebook3 = gtk_notebook_new ();
  gtk_widget_show (notebook3);
  gtk_container_add (GTK_CONTAINER (notebook2), notebook3);

  scrolledwindow3 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow3);
  gtk_container_add (GTK_CONTAINER (notebook3), scrolledwindow3);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow3), GTK_SHADOW_IN);

  treeview3 = gtk_tree_view_new ();
  gtk_widget_show (treeview3);
  gtk_container_add (GTK_CONTAINER (scrolledwindow3), treeview3);

  label6 = gtk_label_new (_("Historique de reservation"));
  gtk_widget_show (label6);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook3), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook3), 0), label6);

  scrolledwindow4 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow4);
  gtk_container_add (GTK_CONTAINER (notebook3), scrolledwindow4);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow4), GTK_SHADOW_IN);

  treeview4 = gtk_tree_view_new ();
  gtk_widget_show (treeview4);
  gtk_container_add (GTK_CONTAINER (scrolledwindow4), treeview4);

  label7 = gtk_label_new (_("Historique de Reclamation"));
  gtk_widget_show (label7);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook3), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook3), 1), label7);

  label4 = gtk_label_new (_("Historique"));
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 3), label4);

  button1 = gtk_button_new_with_mnemonic (_("Deconecter"));
  gtk_widget_show (button1);
  gtk_container_add (GTK_CONTAINER (notebook2), button1);

  label5 = gtk_label_new (_("Deconecter"));
  gtk_widget_show (label5);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 4), label5);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, notebook2, "notebook2");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (window1, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (window1, treeview2, "treeview2");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, notebook3, "notebook3");
  GLADE_HOOKUP_OBJECT (window1, scrolledwindow3, "scrolledwindow3");
  GLADE_HOOKUP_OBJECT (window1, treeview3, "treeview3");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, scrolledwindow4, "scrolledwindow4");
  GLADE_HOOKUP_OBJECT (window1, treeview4, "treeview4");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");

  return window1;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *Start;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("window2"));

  Start = gtk_button_new_with_mnemonic (_("Start"));
  gtk_widget_show (Start);
  gtk_container_add (GTK_CONTAINER (window2), Start);

  g_signal_connect ((gpointer) Start, "clicked",
                    G_CALLBACK (on_Start_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, Start, "Start");

  return window2;
}

