hp()
{

	lr_start_transaction("go_hp");

	web_add_header("Origin", 
		"http://localhost");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(22);
	lr_rendezvous("hp_rend");

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Administrator",
		LAST);

	web_submit_data("main_screen.php", 
		"Action=http://{url}/interface/main/main_screen.php?auth=login&site=default", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/login/login.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=new_login_session_management", "Value=1", ENDITEM, 
		"Name=authProvider", "Value=Default", ENDITEM, 
		"Name=authUser", "Value=admin", ENDITEM, 
		"Name=clearPass", "Value=123456", ENDITEM, 
		"Name=languageChoice", "Value=1", ENDITEM, 
		LAST);

	

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.php", 
		"URL=http://{url}/interface/main/calendar/index.php?module=PostCalendar&viewtype=day&func=view&pc_username=admin&framewidth=1212", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/main_info.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("daemon_frame.php", 
		"URL=http://{url}/interface/main/daemon_frame.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/daemon_frame.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("dated_reminders.php", 
		"Action=http://{url}/interface/main/dated_reminders/dated_reminders.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/messages/messages.php?form_active=1", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=drR", "Value=0", ENDITEM, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("dated_reminders_counter.php", 
		"Action=http://{url}/library/ajax/dated_reminders_counter.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("execute_background_services.php", 
		"Action=http://{url}/library/ajax/execute_background_services.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		"Name=ajax", "Value=1", ENDITEM, 
		LAST);

	lr_end_transaction("go_hp", LR_AUTO);

	return 0;
}
