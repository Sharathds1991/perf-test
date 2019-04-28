accounts()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("index.php_2", 
		"URL=http://localhost/logic/admin/index.php?load=accounting/account&token={tokenkey}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=common/dashboard&token={tokenkey}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
