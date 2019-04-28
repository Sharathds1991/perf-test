create_acc()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(8);

	web_url("index.php_3", 
		"URL=http://localhost/logic/admin/index.php?load=accounting/account/form&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index.php_4", 
		"URL=http://localhost/logic/admin/index.php?load=accounting/account/getaccounts&token=16509acfe2ee0ab19d64ac069ce71986&type=current_asset", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account/form&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://localhost");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("index.php_5", 
		"Action=http://localhost/logic/admin/index.php?load=accounting/account/form&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account/form&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=account_id", "Value=672", ENDITEM, 
		"Name=name", "Value=tax collect", ENDITEM, 
		"Name=description", "Value=tax collect", ENDITEM, 
		"Name=type", "Value=current_asset", ENDITEM, 
		"Name=parent_id", "Value=1200", ENDITEM, 
		"Name=status", "Value=1", ENDITEM, 
		LAST);

	return 0;
}
