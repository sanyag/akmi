<?php
// process brightcove image
if (isset($uri)) {
  $video_url = file_create_url($uri);
}
?>
<?php if (isset($video_url) && !empty($video_url)): ?>
<object id="flashObj" class="<?php print $video_size; ?>" classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,47,0"> 
   <param name="movie" value="<?php print $video_url; ?>" /> 
   <param name="bgcolor" value="#FFFFFF" /> 
   <param name="flashVars" value="playerID=2212788304001&domain=embed" />
   <param name="base" value="http://admin.brightcove.com" /> 
   <param name="seamlesstabbing" value="false" /> 
   <param name="allowFullScreen" value="true" /> 
   <param name="swLiveConnect" value="true" /> 
   <param name="allowScriptAccess" value="always" /> 
   <embed src="<?php print $video_url; ?>" 
     bgcolor="#FFFFFF" flashVars="playerID=2212788304001&domain=embed" 
     base="http://admin.brightcove.com" name="flashObj" width="660" height="385" seamlesstabbing="false" type="application/x-shockwave-flash" 
     allowFullScreen="true" swLiveConnect="true" 
     allowScriptAccess="always" pluginspage="http://www.macromedia.com/shockwave/download/index.cgi?P1_Prod_Version=ShockwaveFlash"> 
   </embed>
</object>
<p>&nbsp;</p>
<?php endif; ?>
