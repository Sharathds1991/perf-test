search_pat()
{

	lr_start_transaction("sear_pat");

		web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(21);

	web_url("new.php", 
		"URL=http://{url}/interface/new/new.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(14);

	web_submit_data("dated_reminders.php_2", 
		"Action=http://{url}/interface/main/dated_reminders/dated_reminders.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/messages/messages.php?form_active=1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=drR", "Value=0", ENDITEM, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("dated_reminders_counter.php_2", 
		"Action=http://{url}/library/ajax/dated_reminders_counter.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("execute_background_services.php_2", 
		"Action=http://{url}/library/ajax/execute_background_services.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		"Name=ajax", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(22);

	web_url("new_search_popup.php", 
		"URL=http://{url}/interface/new/new_search_popup.php?mf_fname={pat_name}{pat_no}&mf_lname={pat_name}{pat_no}&mf_pubpid={pat_name}{pat_no}&mf_DOB=2019-03-23", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/new/new.php", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sear_pat", LR_AUTO);


	return 0;
}
