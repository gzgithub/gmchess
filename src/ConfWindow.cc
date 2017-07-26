/*
 * =====================================================================================
 *
 *       Filename:  ConfWindow.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2009年06月19日 21时41分51秒 CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lerosua (), lerosua@gmail.com
 *        Company:  Cyclone
 *
 * =====================================================================================
 */

#include "ConfWindow.h"
#include "MainWindow.h"

ConfWindow::ConfWindow(MainWindow * parent_):parent(parent_)
{
	Gtk::Label*  tmp_label= Gtk::manage(new Gtk::Label("Not implement yet"));
	this->add(*tmp_label);
	this->set_size_request(521,577);
	show_all();

}

ConfWindow::~ConfWindow()
{
}

void ConfWindow::on_button_save()
{
	on_button_cancel();
}


void ConfWindow::on_button_cancel()
{
	//delete this;
	parent->on_conf_window_close();
}

bool ConfWindow::on_delete_event(GdkEventAny*)
{
	on_button_cancel();

}
