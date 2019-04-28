cust()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(11);

	web_url("index.php_6", 
		"URL=http://localhost/logic/admin/index.php?load=billing/customer&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
