#include <gtk/gtk.h>

int main(int argc, char** argv)
{
    GtkWidget *window, *button, *box;
    
    gtk_init(&argc,&argv);
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hello World");
    gtk_window_set_default_size(GTK_WINDOW(window), 230, 150);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    
    box = gtk_hbox_new(FALSE,0);
    gtk_container_add(GTK_CONTAINER (window), box);
    button = gtk_button_new_with_label("Hello World");
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 0);
    
    gtk_widget_show(window);
    gtk_widget_show(box);
    gtk_widget_show(button);
    
    g_signal_connect_swapped(G_OBJECT(window), "destroy",
                             G_CALLBACK(gtk_main_quit), NULL);
    
    gtk_main();
    
    return 0;
}