inv()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);

	web_url("index.php_9", 
		"URL=http://localhost/logic/admin/index.php?load=billing/invoice&token={tokenkey}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/customer&token={tokenkey}", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
