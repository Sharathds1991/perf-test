create_acc()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(8);

	web_url("index.php_3", 
		"URL=http://localhost/logic/admin/index.php?load=accounting/account/form&token={tokenkey}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account&token={tokenkey}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index.php_4", 
		"URL=http://localhost/logic/admin/index.php?load=accounting/account/getaccounts&token={tokenkey}&type=current_asset", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account/form&token={tokenkey}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://localhost");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("index.php_5", 
		"Action=http://localhost/logic/admin/index.php?load=accounting/account/form&token={tokenkey}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account/form&token={tokenkey}", 
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
