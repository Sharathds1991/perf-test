accounts()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("index.php_2", 
		"URL=http://localhost/logic/admin/index.php?load=accounting/account&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=common/dashboard&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
