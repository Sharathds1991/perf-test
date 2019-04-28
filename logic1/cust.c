cust()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(11);

	web_url("index.php_6", 
		"URL=http://localhost/logic/admin/index.php?load=billing/customer&token={tokenkey}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=accounting/account&token={tokenkey}", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
