/*
* Slides, A Slideshow Plugin for jQuery
* Intructions: http://slidesjs.com
* By: Nathan Searles, http://nathansearles.com
* Version: 1.1.9
* Updated: September 5th, 2011
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
(function(a){a.fn.slides=function(b){return b=a.extend({},a.fn.slides.option,b),this.each(function(){function w(g,h,i){if(!p&&o){p=!0,b.animationStart(n+1);switch(g){case"next":l=n,k=n+1,k=e===k?0:k,r=f*2,g=-f*2,n=k;break;case"prev":l=n,k=n-1,k=k===-1?e-1:k,r=0,g=0,n=k;break;case"pagination":k=parseInt(i,10),l=a("."+b.paginationClass+" li."+b.currentClass+" a",c).attr("href").match("[^#/]+$"),k>l?(r=f*2,g=-f*2):(r=0,g=0),n=k}h==="fade"?b.crossfade?d.children(":eq("+k+")",c).css({zIndex:10}).fadeIn(b.fadeSpeed,b.fadeEasing,function(){b.autoHeight?d.animate({height:d.children(":eq("+k+")",c).outerHeight()},b.autoHeightSpeed,function(){d.children(":eq("+l+")",c).css({display:"none",zIndex:0}),d.children(":eq("+k+")",c).css({zIndex:0}),b.animationComplete(k+1),p=!1}):(d.children(":eq("+l+")",c).css({display:"none",zIndex:0}),d.children(":eq("+k+")",c).css({zIndex:0}),b.animationComplete(k+1),p=!1)}):d.children(":eq("+l+")",c).fadeOut(b.fadeSpeed,b.fadeEasing,function(){b.autoHeight?d.animate({height:d.children(":eq("+k+")",c).outerHeight()},b.autoHeightSpeed,function(){d.children(":eq("+k+")",c).fadeIn(b.fadeSpeed,b.fadeEasing)}):d.children(":eq("+k+")",c).fadeIn(b.fadeSpeed,b.fadeEasing,function(){a.browser.msie&&a(this).get(0).style.removeAttribute("filter")}),b.animationComplete(k+1),p=!1}):(d.children(":eq("+k+")").css({left:r,display:"block"}),b.autoHeight?d.animate({left:g,height:d.children(":eq("+k+")").outerHeight()},b.slideSpeed,b.slideEasing,function(){d.css({left:-f}),d.children(":eq("+k+")").css({left:f,zIndex:5}),d.children(":eq("+l+")").css({left:f,display:"none",zIndex:0}),b.animationComplete(k+1),p=!1}):d.animate({left:g},b.slideSpeed,b.slideEasing,function(){d.css({left:-f}),d.children(":eq("+k+")").css({left:f,zIndex:5}),d.children(":eq("+l+")").css({left:f,display:"none",zIndex:0}),b.animationComplete(k+1),p=!1})),b.pagination&&(a("."+b.paginationClass+" li."+b.currentClass,c).removeClass(b.currentClass),a("."+b.paginationClass+" li:eq("+k+")",c).addClass(b.currentClass))}}function x(){clearInterval(c.data("interval"))}function y(){b.pause?(clearTimeout(c.data("pause")),clearInterval(c.data("interval")),u=setTimeout(function(){clearTimeout(c.data("pause")),v=setInterval(function(){w("next",i)},b.play),c.data("interval",v)},b.pause),c.data("pause",u)):x()}a("."+b.container,a(this)).children().wrapAll('<div class="slides_control"/>');var c=a(this),d=a(".slides_control",c),e=d.children().size(),f=d.children().outerWidth(),g=d.children().outerHeight(),h=b.start-1,i=b.effect.indexOf(",")<0?b.effect:b.effect.replace(" ","").split(",")[0],j=b.effect.indexOf(",")<0?i:b.effect.replace(" ","").split(",")[1],k=0,l=0,m=0,n=0,o,p,q,r,s,t,u,v;if(e<2)return a("."+b.container,a(this)).fadeIn(b.fadeSpeed,b.fadeEasing,function(){o=!0,b.slidesLoaded()}),a("."+b.next+", ."+b.prev).fadeOut(0),!1;if(e<2)return;h<0&&(h=0),h>e&&(h=e-1),b.start&&(n=h),b.randomize&&d.randomize(),a("."+b.container,c).css({overflow:"hidden",position:"relative"}),d.children().css({position:"absolute",top:0,left:d.children().outerWidth(),zIndex:0,display:"none"}),d.css({position:"relative",width:f*3,height:g,left:-f}),a("."+b.container,c).css({display:"block"}),b.autoHeight&&(d.children().css({height:"auto"}),d.animate({height:d.children(":eq("+h+")").outerHeight()},b.autoHeightSpeed));if(b.preload&&d.find("img:eq("+h+")").length){a("."+b.container,c).css({background:"url("+b.preloadImage+") no-repeat 50% 50%"});var z=d.find("img:eq("+h+")").attr("src")+"?"+(new Date).getTime();a("img",c).parent().attr("class")!="slides_control"?t=d.children(":eq(0)")[0].tagName.toLowerCase():t=d.find("img:eq("+h+")"),d.find("img:eq("+h+")").attr("src",z).load(function(){d.find(t+":eq("+h+")").fadeIn(b.fadeSpeed,b.fadeEasing,function(){a(this).css({zIndex:5}),a("."+b.container,c).css({background:""}),o=!0,b.slidesLoaded()})})}else d.children(":eq("+h+")").fadeIn(b.fadeSpeed,b.fadeEasing,function(){o=!0,b.slidesLoaded()});b.bigTarget&&(d.children().css({cursor:"pointer"}),d.children().click(function(){return w("next",i),!1})),b.hoverPause&&b.play&&(d.bind("mouseover",function(){x()}),d.bind("mouseleave",function(){y()})),b.generateNextPrev&&(a("."+b.container,c).after('<a href="#" class="'+b.prev+'">Prev</a>'),a("."+b.prev,c).after('<a href="#" class="'+b.next+'">Next</a>')),a("."+b.next,c).click(function(a){a.preventDefault(),b.play&&y(),w("next",i)}),a("."+b.prev,c).click(function(a){a.preventDefault(),b.play&&y(),w("prev",i)}),b.generatePagination?(b.prependPagination?c.prepend("<ul class="+b.paginationClass+"></ul>"):c.append("<ul class="+b.paginationClass+"></ul>"),d.children().each(function(){a("."+b.paginationClass,c).append('<li><a href="#'+m+'">'+(m+1)+"</a></li>"),m++})):a("."+b.paginationClass+" li a",c).each(function(){a(this).attr("href","#"+m),m++}),a("."+b.paginationClass+" li:eq("+h+")",c).addClass(b.currentClass),a("."+b.paginationClass+" li a",c).click(function(){return b.play&&y(),q=a(this).attr("href").match("[^#/]+$"),n!=q&&w("pagination",j,q),!1}),a("a.link",c).click(function(){return b.play&&y(),q=a(this).attr("href").match("[^#/]+$")-1,n!=q&&w("pagination",j,q),!1}),b.play&&(v=setInterval(function(){w("next",i)},b.play),c.data("interval",v))})},a.fn.slides.option={preload:!1,preloadImage:"/img/loading.gif",container:"slides_container",generateNextPrev:!1,next:"next",prev:"prev",pagination:!0,generatePagination:!0,prependPagination:!1,paginationClass:"pagination",currentClass:"current",fadeSpeed:350,fadeEasing:"",slideSpeed:350,slideEasing:"",start:1,effect:"slide",crossfade:!1,randomize:!1,play:0,pause:0,hoverPause:!1,autoHeight:!1,autoHeightSpeed:350,bigTarget:!1,animationStart:function(){},animationComplete:function(){},slidesLoaded:function(){}},a.fn.randomize=function(b){function c(){return Math.round(Math.random())-.5}return a(this).each(function(){var d=a(this),e=d.children(),f=e.length;if(f>1){e.hide();var g=[];for(i=0;i<f;i++)g[g.length]=i;g=g.sort(c),a.each(g,function(a,c){var f=e.eq(c),g=f.clone(!0);g.show().appendTo(d),b!==undefined&&b(f,g),f.remove()})}})}})(jQuery);

if(brightcove==undefined){var brightcove={};brightcove.getExperience=function(){alert("Please import APIModules_all.js in order to use the API.");};}
if(brightcove.experiences==undefined){brightcove.servicesURL='http://c.brightcove.com/services';brightcove.cdnURL='http://admin.brightcove.com';brightcove.secureCDNURL='https://sadmin.brightcove.com';brightcove.secureServicesURL='https://secure.brightcove.com/services';brightcove.pubHost='c.$pubcode$.$zoneprefix$$zone$';brightcove.pubSecureHost='secure.$pubcode$.$zoneprefix$$zone$';brightcove.pubSubdomain='ariessaucetown.local';brightcove.experiences={};brightcove.experienceObjects={};brightcove.timeouts={};brightcove.flashTimeoutInterval=10000;brightcove.htmlTimeoutInterval=10000;brightcove.experienceNum=0;brightcove.majorVersion=9;brightcove.majorRevision=0;brightcove.minorRevision=28;brightcove.servlet={AS3:"federated_f9",HTML:"htmlFederated"};brightcove.playerType={FLASH:"flash",HTML:"html",FLASH_IFRAME:"flashIFrame",INSTALLER:"installer",NO_SUPPORT:"nosupport"};brightcove.errorCodes={UNKNOWN:0,DOMAIN_RESTRICTED:1,GEO_RESTRICTED:2,INVALID_ID:3,NO_CONTENT:4,UNAVAILABLE_CONTENT:5,UPGRADE_REQUIRED_FOR_VIDEO:6,UPGRADE_REQUIRED_FOR_PLAYER:7,SERVICE_UNAVAILABLE:8};brightcove.defaultParam={};brightcove.defaultParam.width='100%';brightcove.defaultParam.height='100%';brightcove.defaultFlashParam={};brightcove.defaultFlashParam.allowScriptAccess='always';brightcove.defaultFlashParam.allowFullScreen='true';brightcove.defaultFlashParam.seamlessTabbing=false;brightcove.defaultFlashParam.swliveconnect=true;brightcove.defaultFlashParam.wmode='window';brightcove.defaultFlashParam.quality='high';brightcove.defaultFlashParam.bgcolor='#999999';brightcove.hasActiveX=brightcove.isIE=(window.ActiveXObject!=undefined);brightcove.userAgent=navigator.userAgent;brightcove._queuedAPICalls=[];var brightcoveJS=brightcove;brightcove.createExperiences=function(pEvent,pElementID){var experiences=[];var params;var experience;var flashSupport=brightcove.checkFlashSupport();var htmlSupport=brightcove.checkHtmlSupport();if(pElementID!=null){experiences.push(document.getElementById(pElementID));}else{experiences=brightcove.collectExperiences();}
if(brightcove.hasActiveX){params=document.getElementsByTagName('param');}
var urlParams=brightcove.cacheUrlParams();var numExperiences=experiences.length;for(var i=0;i<numExperiences;i++){experience=experiences[i];experience=brightcove.copyDefaultParams(experience);experience=brightcove.copySnippetParams(experience,params);experience=brightcove.copyUrlParams(experience,urlParams,numExperiences);var playerType=brightcove.determinePlayerType(experience,flashSupport,htmlSupport);var secureConnections=false;if(playerType==brightcove.playerType.HTML){secureConnections=experience.params.secureHTMLConnections=="true";}else{secureConnections=experience.params.secureConnections=="true";}
if(playerType==brightcove.playerType.NO_SUPPORT){brightcove.renderInstallGif(experience,secureConnections);brightcove.reportUpgradeRequired(experience);continue;}
if(playerType==brightcove.playerType.HTML){delete experience.params.linkBaseURL;}else{if(experience.params.includeAPI&&experience.params.templateReadyHandler!=null){experience.params.originalTemplateReadyHandler=experience.params.templateReadyHandler;var handlerName="templateReadyHandler"+experience.id;brightcove[handlerName]=(function(id){return function(event){if(brightcove.internal!=null&&brightcove.internal._instances[id]!=null){brightcove._addModuleToEvent(id,event);}
var player=brightcove.experienceObjects[id];brightcove.callHandlerForPlayer(player,"originalTemplateReadyHandler",event);};})(experience.id);experience.params.templateReadyHandler='brightcove["'+handlerName+'"]';}}
var file=brightcove.generateRequestUrl(experience,playerType,secureConnections);if(document.location.protocol=="http:"){var event='http://goku.brightcove.com/1pix.gif?';var gokuParams=["dcsuri=/viewer/player_load_req","playerType="+playerType,"playerURL="+encodeURIComponent(document.location||"")];var image=brightcove.createElement('image');for(var j in experience.params){gokuParams.push([encodeURIComponent(j)+"="+encodeURIComponent(experience.params[j])]);}
event+=gokuParams.join('&');image.src=event;}
brightcove.renderExperience(experience,file,playerType,secureConnections);}};brightcove.collectExperiences=function(){var experiences=[];var allObjects=document.getElementsByTagName('object');var numObjects=allObjects.length;for(var i=0;i<numObjects;i++){if(/\bBrightcoveExperience\b/.test(allObjects[i].className)){if(allObjects[i].type!='application/x-shockwave-flash'){experiences.push(allObjects[i]);}}}
return experiences;};brightcove.cacheUrlParams=function(){var urlParams={};urlParams.playerKey=decodeURIComponent(brightcove.getParameter("bckey"));urlParams.playerID=brightcove.getParameter("bcpid");urlParams.titleID=brightcove.getParameter("bctid");urlParams.lineupID=brightcove.getParameter("bclid");urlParams.autoStart=brightcove.getParameter("autoStart");urlParams.debuggerID=brightcove.getParameter("debuggerID");urlParams.forceHTML=brightcove.getParameter("forceHTML");urlParams.forceFlashIFrame=brightcove.getParameter("forceFlashIFrame");urlParams.debug=brightcove.getParameter("debug");urlParams.showNoContentMessage=brightcove.getParameter("showNoContentMessage");urlParams.htmlDefaultBitrate=brightcove.getParameter("htmlDefaultBitrate");urlParams.linkSrc=brightcove.getParameter("linkSrc");return urlParams;};brightcove.copyDefaultParams=function(experience){if(!experience.params)experience.params={};if(!experience.flashParams)experience.flashParams={};for(var i in brightcove.defaultParam){experience.params[i]=brightcove.defaultParam[i];}
for(var j in brightcove.defaultFlashParam){experience.flashParams[j]=brightcove.defaultFlashParam[j];}
if(experience.id.length>0){experience.params.flashID=experience.id;}else{experience.id=experience.params.flashID='bcExperienceObj'+(brightcove.experienceNum++);}
return experience;};brightcove.copySnippetParams=function(experience,params){if(!brightcove.hasActiveX){params=experience.getElementsByTagName('param');}
var numParams=params.length;var param;for(var j=0;j<numParams;j++){param=params[j];if(brightcove.hasActiveX&&param.parentNode.id!=experience.id){continue;}
experience.params[param.name]=param.value;}
if(experience.params.bgcolor!=undefined)experience.flashParams.bgcolor=experience.params.bgcolor;if(experience.params.wmode!=undefined)experience.flashParams.wmode=experience.params.wmode;if(experience.params.seamlessTabbing!=undefined)experience.flashParams.seamlessTabbing=experience.params.seamlessTabbing;return experience;};brightcove.copyUrlParams=function(experience,urlParams){if(experience.params.autoStart==undefined&&urlParams.autoStart!=undefined){experience.params.autoStart=urlParams.autoStart;}
if(urlParams.debuggerID!=undefined){experience.params.debuggerID=urlParams.debuggerID;}
if(urlParams.forceHTML!=undefined&&urlParams.forceHTML!==''){experience.params.forceHTML=urlParams.forceHTML;}
if(urlParams.forceFlashIFrame!=undefined&&urlParams.forceFlashIFrame!==''){experience.params.forceFlashIFrame=urlParams.forceFlashIFrame;}
if(urlParams.debug!=undefined&&urlParams.debug!==''){experience.params.debug=urlParams.debug;}
if(urlParams.showNoContentMessage!=undefined&&urlParams.showNoContentMessage!=''){experience.params.showNoContentMessage=urlParams.showNoContentMessage;}
if(urlParams.htmlDefaultBitrate!=undefined&&urlParams.htmlDefaultBitrate!==''){experience.params.htmlDefaultBitrate=urlParams.htmlDefaultBitrate;}
if(urlParams.linkSrc!=undefined&&urlParams.linkSrc!=''){experience.params.linkSrc=urlParams.linkSrc;}
var overrideContent=(urlParams.playerID.length<1&&urlParams.playerKey.length<1)||(urlParams.playerID==experience.params.playerID)||(urlParams.playerKey==experience.params.playerKey);if(overrideContent){if(urlParams.titleID.length>0){experience.params.videoID=urlParams.titleID;experience.params["@videoPlayer"]=urlParams.titleID;experience.params.autoStart=(experience.params.autoStart!="false"&&urlParams.autoStart!="false");}
if(urlParams.lineupID.length>0){experience.params.lineupID=urlParams.lineupID;}}
return experience;};brightcove.determinePlayerType=function(experience,flashSupport,htmlSupport){if(flashSupport==null&&htmlSupport==false){return brightcove.playerType.NO_SUPPORT;}
if(experience.params.forceHTML){if(window.console){var message="The forceHTML parameter was used for the Brightcove player. This value should ONLY be used for";message+=" development and testing purposes and is not supported in production environments.";console.log(message);}
return brightcove.playerType.HTML;}
if(experience.params.forceFlashIFrame||(brightcove.isMetroIE()&&flashSupport==null)){return brightcove.playerType.FLASH_IFRAME;}
if(flashSupport!=null){if(brightcove.isFlashVersionSufficient(experience,flashSupport)){return brightcove.playerType.FLASH;}else{return brightcove.playerType.INSTALLER;}}
if(htmlSupport){if(brightcove.isSupportedHTMLDevice()||experience.params.htmlFallback){return brightcove.playerType.HTML;}}
return brightcove.playerType.NO_SUPPORT;};brightcove.isFlashVersionSufficient=function(experience,flashSupport){if(flashSupport==null)return false;var setMajorVersion=false;var requestedMajorVersion;var requestedMajorRevision;var requestedMinorRevision;if(experience.params.majorVersion!=undefined){requestedMajorVersion=parseInt(experience.params.majorVersion,10);setMajorVersion=true;}else{requestedMajorVersion=brightcove.majorVersion;}
if(experience.params.majorRevision!=undefined){requestedMajorRevision=parseInt(experience.params.majorRevision,10);}else{if(setMajorVersion){requestedMajorRevision=0;}else{requestedMajorRevision=brightcove.majorRevision;}}
if(experience.params.minorRevision!=undefined){requestedMinorRevision=parseInt(experience.params.minorRevision,10);}else{if(setMajorVersion){requestedMinorRevision=0;}else{requestedMinorRevision=brightcove.minorRevision;}}
return(flashSupport.majorVersion>requestedMajorVersion||(flashSupport.majorVersion==requestedMajorVersion&&flashSupport.majorRevision>requestedMajorRevision)||(flashSupport.majorVersion==requestedMajorVersion&&flashSupport.majorRevision==requestedMajorRevision&&flashSupport.minorRevision>=requestedMinorRevision));};brightcove.generateRequestUrl=function(experience,playerType,secureConnections){var file;if(playerType==brightcove.playerType.INSTALLER){file=brightcove.cdnURL+"/viewer/playerProductInstall.swf";var MMPlayerType=brightcove.hasActiveX?"ActiveX":"PlugIn";document.title=document.title.slice(0,47)+" - Flash Player Installation";var MMdoctitle=document.title;file+="?&MMredirectURL="+window.location+'&MMplayerType='+MMPlayerType+'&MMdoctitle='+MMdoctitle;brightcove.reportUpgradeRequired(experience);}else{if(secureConnections){file=brightcove.getPubURL(brightcove.secureServicesURL,brightcove.pubSecureHost,experience.params.pubCode);}else{file=brightcove.getPubURL(brightcove.servicesURL,brightcove.pubHost,experience.params.pubCode);}
var servlet=(playerType==brightcove.playerType.HTML)?brightcove.servlet.HTML:brightcove.servlet.AS3;file+='/viewer/'+servlet+'?'+brightcove.getOverrides();for(var config in experience.params){file+='&'+encodeURIComponent(config)+'='+encodeURIComponent(experience.params[config]);}}
return file;};brightcove.renderInstallGif=function(experience,secureConnections){var containerID='_container'+experience.id;var container=brightcove.createElement('span');if(experience.params.height.charAt(experience.params.height.length-1)=="%"){container.style.display='block';}else{container.style.display='inline-block';}
container.id=containerID;var cdnURL=secureConnections?brightcove.secureCDNURL:brightcove.cdnURL;var upgradeFlashImage=cdnURL.indexOf('.co.jp')>0?"upgrade_flash_player_kk.gif":"upgrade_flash_player2.gif";var linkHTML="<a href='http://www.adobe.com/go/getflash/' target='_blank'><img src='"+cdnURL+"/viewer/"+upgradeFlashImage+"' alt='Get Flash Player' width='314' height='200' border='0'></a>";experience.parentNode.replaceChild(container,experience);document.getElementById(containerID).innerHTML=linkHTML;};brightcove.renderExperience=function(experience,file,playerType,secureConnections){var experienceElement;var experienceID=experience.id;var container;var timeout=brightcove.flashTimeoutInterval;if(!(experience.params.playerKey||experience.params.playerID||experience.params.playerId||experience.params.playerid)){if(window.console){console.log("No playerID or playerKey was found for the Brightcove player, so it can not be rendered.");}
return;}
brightcove.experienceObjects[experienceID]=experience;var unminified=(brightcove.getParameter("unminified")=="true")||(experience.params.unminified==="true");if(experience.params.includeAPI==="true"&&!(brightcove._apiRequested||brightcove.api)){var source="/js/api/";if(unminified){source+="unminified/";}
source+="SmartPlayerAPI.js";var apiInclude=brightcove.createElement('script');apiInclude.type="text/javascript";var cdnURL=secureConnections?brightcove.secureCDNURL:brightcove.cdnURL;apiInclude.src=cdnURL+source;experience.parentNode.appendChild(apiInclude);brightcove._apiRequested=true;}
file+="&startTime="+new Date().getTime();if(playerType===brightcove.playerType.HTML){timeout=brightcove.htmlTimeoutInterval;file+="&refURL="+(window.document.referrer?window.document.referrer:'not available');if(unminified){file+="&unminified=true";}
experienceElement=brightcove.createIFrame(experience);experience.parentNode.replaceChild(experienceElement,experience);brightcove.experiences[experienceID]=experienceElement;experience.element=experienceElement;if(experience.params.videoID||experience.params.videoId){file+="&"+encodeURIComponent("@videoPlayer")+"="+encodeURIComponent(experience.params.videoID||experience.params.videoId);}
experienceElement.src=file;}else if(playerType===brightcove.playerType.FLASH_IFRAME){var currentCDN=secureConnections?brightcove.secureCDNURL:brightcove.cdnURL;var iframeURL=currentCDN+"/js/flash_iframe.html?parentPage="+window.location.toString().split("?")[0];iframeURL+='&currentCDN='+currentCDN;if(unminified){iframeURL+='&unminified='+unminified;}
experienceElement=brightcove.createIFrame(experience);experience.parentNode.replaceChild(experienceElement,experience);brightcove.experiences[experienceID]=experienceElement;experience.element=experienceElement;experienceElement.src=iframeURL;window.addEventListener('message',function(event){if(event.origin.split("/")[2]!==currentCDN.split("/")[2])return;var data=JSON.parse(event.data);if(data!="bcIframeInitialized"){return;}
var playerConfig;if(brightcove.hasActiveX){experience.flashParams.movie=file;var flashEmbedStr=brightcove.getFlashEmbedString(experience,secureConnections);playerConfig={activeX:flashEmbedStr,height:experience.params.height,id:'_container'+experience.id,file:file};}else{playerConfig=brightcove.getFlashObjectParams(experience,file);}
var playerConfigStr=JSON.stringify(playerConfig);experienceElement.contentWindow.postMessage(playerConfigStr,currentCDN);},false);window.addEventListener('message',function(event){if(event.origin.split("/")[2]!==currentCDN.split("/")[2])return;var data=JSON.parse(event.data);if(data.api&&brightcove.internal&&brightcove.internal._setAPICallback){if(data.api=="apiCallback"){brightcove.internal._setAPICallback(data.pid,data.callback,iframeURL);}else if(data.api=="loadEvent"){window[data.callback](data.event);}else if(data.api=="onTemplateReadyEvent"){brightcove[data.callback](data.event);}}},false);}else{if(brightcove.hasActiveX){experience.flashParams.movie=file;var flashEmbedStr=brightcove.getFlashEmbedString(experience,secureConnections);var containerID='_container'+experience.id;container=brightcove.createFlashEmbed(containerID,experience.params.height);experience.parentNode.replaceChild(container,experience);document.getElementById(containerID).innerHTML=flashEmbedStr;brightcove.experiences[experienceID]=container;}else{var flashObjectParams=brightcove.getFlashObjectParams(experience,file);experienceElement=brightcove.createFlashObject(flashObjectParams);experience.parentNode.replaceChild(experienceElement,experience);brightcove.experiences[experienceID]=experienceElement;}}
brightcove.timeouts[experience.id]=setTimeout(function(){brightcove.handleExperienceTimeout(experienceID);},timeout);};brightcove.createIFrame=function(experience){var iframeElement=brightcove.createElement('iframe');iframeElement.id=experience.id;iframeElement.width=experience.params.width;iframeElement.height=experience.params.height;iframeElement.className=experience.className;iframeElement.frameborder=0;iframeElement.scrolling="no";iframeElement.style.borderStyle="none";return iframeElement;};brightcove.getFlashEmbedString=function(experience,secureConnections){var options='';var flashParams=experience.flashParams;for(var pOption in flashParams){options+='<param name="'+pOption+'" value="'+experience.flashParams[pOption]+'" />';}
var protocol=secureConnections?"https":"http";return'<object classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000"'
+' codebase="'+protocol+'://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version='+brightcove.majorVersion+','+brightcove.majorRevision+','+brightcove.minorRevision+',0"'
+' id="'+experience.id+'"'
+' width="'+experience.params.width+'"'
+' height="'+experience.params.height+'"'
+' type="application/x-shockwave-flash"'
+' class="BrightcoveExperience">'
+options
+'</object>';};brightcove.getFlashObjectParams=function(experience,file){var experienceObject={};experienceObject.type='application/x-shockwave-flash';experienceObject.data=file;experienceObject.id=experience.params.flashID;experienceObject.width=experience.params.width;experienceObject.height=experience.params.height;experienceObject.className=experience.className;experienceObject.seamlesstabbing=experience.flashParams.seamlessTabbing;for(var config in experience.flashParams){experienceObject["flashParam_"+config]=experience.flashParams[config];}
return experienceObject;};brightcove.createFlashEmbed=function(experienceId,height){var container=brightcove.createElement('span');if(height.charAt(height.length-1)=="%"){container.style.display='block';}else{container.style.display='inline-block';}
container.id=experienceId;return container;};brightcove.createFlashObject=function(playerConfig){var experienceElement=brightcove.createElement('object');experienceElement.type=playerConfig.type;experienceElement.data=playerConfig.data;experienceElement.id=playerConfig.id;experienceElement.width=playerConfig.width;experienceElement.height=playerConfig.height;experienceElement.className=playerConfig.className;experienceElement.setAttribute("seamlesstabbing",playerConfig.seamlessTabbing);var tempParam;var flashParamPrefix="flashParam_";for(var config in playerConfig){var flashParamInd=config.indexOf(flashParamPrefix);if(flashParamInd==0){tempParam=brightcove.createElement('param');tempParam.name=config.substring(flashParamPrefix.length);tempParam.value=playerConfig[config];experienceElement.appendChild(tempParam);}}
return experienceElement;};brightcove.handleExperienceTimeout=function(pID){brightcove.executeErrorHandlerForExperience(brightcove.experienceObjects[pID],{type:"templateError",errorType:"serviceUnavailable",code:brightcove.errorCodes.SERVICE_UNAVAILABLE,info:pID});};brightcove.reportPlayerLoad=function(pID){var timeout=brightcove.timeouts[pID];if(timeout){clearTimeout(timeout);}};brightcove.reportUpgradeRequired=function(pExperience){brightcove.executeErrorHandlerForExperience(pExperience,{type:"templateError",errorType:"upgradeRequiredForPlayer",code:brightcove.errorCodes.UPGRADE_REQUIRED_FOR_PLAYER,info:pExperience.id});};brightcove.checkFlashSupport=function(){var hasActiveX=(window.ActiveXObject!=undefined);return(hasActiveX)?brightcove.checkFlashSupportIE():brightcove.checkFlashSupportStandard();};brightcove.checkFlashSupportIE=function(){var versions;try{var flash=new ActiveXObject("ShockwaveFlash.ShockwaveFlash.7");var version=flash.GetVariable('$version');versions=/ ([0-9]+),([0-9]+),([0-9]+),/.exec(version);}catch(exception){return null;}
return{majorVersion:versions[1],majorRevision:versions[2],minorRevision:versions[3]};};brightcove.isMetroIE=function(){var version=0;if(navigator.appVersion.indexOf("MSIE")!=-1){var appSplit=navigator.appVersion.split("MSIE");if(appSplit.length>1){version=parseFloat(appSplit[1]);}}
if(version<10||isNaN(version)){return false;}
var activeXSupport=false;try{activeXSupport=!!new ActiveXObject("htmlfile");}catch(e){activeXSupport=false;}
return!activeXSupport;};brightcove.checkFlashSupportStandard=function(){var versions;var majorVersion;var majorRevision;var minorRevision;try{if(typeof navigator.plugins!='undefined'&&navigator.plugins.length>0){if(navigator.plugins["Shockwave Flash 2.0"]||navigator.plugins["Shockwave Flash"]){var swfVersion=navigator.plugins["Shockwave Flash 2.0"]?" 2.0":"";var description=navigator.plugins["Shockwave Flash"+swfVersion].description;var filename=navigator.plugins["Shockwave Flash"+swfVersion].filename;if(filename.match){if(filename.toLowerCase().match(/lite/)){throw new Error();}}
versions=description.split(" ");majorVersion=versions[2].split(".")[0];majorRevision=versions[2].split(".")[1];minorRevision=versions[3];if(minorRevision==""){minorRevision=versions[4];}
if(minorRevision[0]=="d"){minorRevision=minorRevision.substring(1);}else if(minorRevision[0]=="r"){minorRevision=minorRevision.substring(1);if(minorRevision.indexOf("d")>0){minorRevision=minorRevision.substring(0,minorRevision.indexOf("d"));}}}else{throw new Error();}}else{return null;}}catch(exception){return null;}
return{majorVersion:majorVersion,majorRevision:majorRevision,minorRevision:minorRevision};};brightcove.checkHtmlSupport=function(){var v=brightcove.createElement('video');var videoSupport=true;if(!brightcove.userAgent.match(new RegExp("android","i"))){videoSupport=!!(v.canPlayType&&v.canPlayType('video/mp4; codecs="avc1.42E01E, mp4a.40.2"').replace(/no/,''));}
if(brightcove.userAgent.match(/BlackBerry.*Version\/6\.0/)){return false;}
var canvasSupport=!!brightcove.createElement('canvas').getContext;return videoSupport&&canvasSupport;};brightcove.isSupportedHTMLDevice=function(pUAString){var types=["iPad","iPhone","iPod","android","Silk"];var numTypes=types.length;var uaString=pUAString||brightcove.userAgent;for(var i=0;i<numTypes;i++){if(uaString.match(new RegExp(types[i],"i"))){return true;}}
return false;};brightcove.getTechnology=function(pExperienceId){for(var id in brightcove.experiences){if(pExperienceId==id){return(brightcove.experiences[id].tagName=="object")?brightcove.playerType.FLASH:brightcove.playerType.HTML;}}
return brightcove.playerType.NO_SUPPORT;};brightcove.respondToMessages=function(pMessage){if(brightcove.verifyMessage(pMessage)){var messageData=pMessage.data;if(messageData.charAt(0)=="\""){if(window.JSON){messageData=window.JSON.parse(messageData);}else{messageData=brightcove.json_parse(messageData);}}
var messageParts=messageData.split("::");var type=messageParts[1];var messageJson=messageParts[2].split("\n").join(" ");var messageDataObject;if(window.JSON){messageDataObject=window.JSON.parse(messageJson);}else{messageDataObject=brightcove.json_parse(messageJson);}
switch(type){case"error":brightcove.executeMessageCallback(messageDataObject,brightcove.executeErrorHandlerForExperience);break;case"api":brightcove.handleAPICallForHTML(messageDataObject);break;case"handler":var event=brightcove.internal._convertDates(messageDataObject.event);try{brightcove.internal._handlers[messageDataObject.handler](event);}catch(e){}
break;case"asyncGetter":var data=brightcove.internal._convertDates(messageDataObject.data);brightcove.internal._handlers[messageDataObject.handler](data);break;}}};brightcove.verifyMessage=function(pMessage){return(/^brightcove\.player/).test(pMessage.data);};brightcove.handleAPICallForHTML=function(pMessageObject){var experience=brightcove.experienceObjects[pMessageObject.id];if(experience==null){return;}
var id=experience.id;var method=pMessageObject.method;switch(method){case"initializeBridge":brightcove.reportPlayerLoad(id);if(pMessageObject.arguments[0]){if(brightcove.internal!=null){brightcove.internal._setAPICallback(id,null,pMessageObject.arguments[1]);brightcove.callHandlerForPlayer(experience,"templateLoadHandler",id);}else if(brightcove._apiRequested){brightcove._queuedAPICalls.push(pMessageObject);}}
break;case"callTemplateReady":if(brightcove._apiRequested&&!brightcove.internal){brightcove._queuedAPICalls.push(pMessageObject);}else{var event=pMessageObject.arguments;brightcove._addModuleToEvent(id,event);brightcove.callHandlerForPlayer(experience,"templateReadyHandler",event);}
break;}};brightcove._addModuleToEvent=function(pID,pEvent){if(pEvent.type!=null&&brightcove.api){var experience=brightcove.api.getExperience(pID);if(experience){pEvent.target=experience.getModule("experience");}}};brightcove.callHandlerForPlayer=function(pExperience,pHandler,pArgument){if(pExperience&&pExperience.params&&pExperience.params[pHandler]){var namespaceArray=pExperience.params[pHandler].split(".");var namespaces;if((namespaces=namespaceArray.length)>1){var trace=window;for(var i=0;i<namespaces;i++){trace=trace[namespaceArray[i]];}
if(typeof trace==="function"){trace(pArgument);}}else{window[pExperience.params[pHandler]](pArgument);}}};brightcove.executeErrorHandlerForExperience=function(pExperience,pErrorObject){brightcove.callHandlerForPlayer(pExperience,"templateErrorHandler",pErrorObject);};brightcove.executeMessageCallback=function(pMessageDataObject,pCallback){var experience;for(var experienceKey in brightcove.experienceObjects){experience=brightcove.experienceObjects[experienceKey];if(experience.element.src===pMessageDataObject.__srcUrl){delete pMessageDataObject.__srcUrl;pCallback(experience,pMessageDataObject);break;}}};brightcove.createExperience=function(pElement,pParentOrSibling,pAppend){if(!pElement.id||pElement.id.length<1){pElement.id='bcExperienceObj'+(brightcove.experienceNum++);}
if(pAppend){pParentOrSibling.appendChild(pElement);}else{pParentOrSibling.parentNode.insertBefore(pElement,pParentOrSibling);}
brightcove.createExperiences(null,pElement.id);};brightcove.removeExperience=function(pID){if(brightcove.experiences[pID]!=null){brightcove.experiences[pID].parentNode.removeChild(brightcove.experiences[pID]);}};brightcove.getURL=function(){var url;if(typeof window.location.search!='undefined'){url=window.location.search;}else{url=/(\?.*)$/.exec(document.location.href);}
return url;};brightcove.getOverrides=function(){var url=brightcove.getURL();var query=new RegExp('@[\\w\\.]+=[^&]+','g');var value=query.exec(url);var overrides="";while(value!=null){overrides+="&"+value;value=query.exec(url);}
return overrides;};brightcove.getParameter=function(pName,pDefaultValue){if(pDefaultValue==null)pDefaultValue="";var url=brightcove.getURL();var query=new RegExp(pName+'=([^&]*)');var value=query.exec(url);if(value!=null){return value[1];}else{return pDefaultValue;}};brightcove.createElement=function(el){if(document.createElementNS){return document.createElementNS('http://www.w3.org/1999/xhtml',el);}else{return document.createElement(el);}};brightcove.i18n={'BROWSER_TOO_OLD':'The browser you are using is too old. Please upgrade to the latest version of your browser.'};brightcove.removeListeners=function(){if(/KHTML/i.test(navigator.userAgent)){clearInterval(checkLoad);document.removeEventListener('load',brightcove.createExperiences,false);}
if(typeof document.addEventListener!='undefined'){document.removeEventListener('DOMContentLoaded',brightcove.createExperiences,false);document.removeEventListener('load',brightcove.createExperiences,false);}else if(typeof window.attachEvent!='undefined'){window.detachEvent('onload',brightcove.createExperiences);}};brightcove.getPubURL=function(source,host,pubCode){if(!pubCode||pubCode=="")return source;var re=/^([htps]{4,5}\:\/\/)([^\/\:]+)/i;host=host.replace("$pubcode$",pubCode).replace("$zoneprefix$$zone$",brightcove.pubSubdomain);return source.replace(re,"$1"+host);};brightcove.createExperiencesPostLoad=function(){brightcove.removeListeners();brightcove.createExperiences();};brightcove.encode=function(string){string=escape(string);string=string.replace(/\+/g,"%2B");string=string.replace(/\-/g,"%2D");string=string.replace(/\*/g,"%2A");string=string.replace(/\//g,"%2F");string=string.replace(/\./g,"%2E");string=string.replace(/_/g,"%5F");string=string.replace(/@/g,"%40");return string;};if(/KHTML/i.test(navigator.userAgent)){var checkLoad=setInterval(function(){if(/loaded|complete/.test(document.readyState)){clearInterval(checkLoad);brightcove.createExperiencesPostLoad();}},70);document.addEventListener('load',brightcove.createExperiencesPostLoad,false);}
if(typeof document.addEventListener!='undefined'){document.addEventListener('DOMContentLoaded',brightcove.createExperiencesPostLoad,false);document.addEventListener('load',brightcove.createExperiencesPostLoad,false);window.addEventListener("message",brightcove.respondToMessages,false);}else if(typeof window.attachEvent!='undefined'){window.attachEvent('onload',brightcove.createExperiencesPostLoad);}else{alert(brightcove.i18n.BROWSER_TOO_OLD);}}
brightcove.json_parse=(function(){"use strict";var state,stack,container,key,value,escapes={'\\':'\\','"':'"','/':'/','t':'\t','n':'\n','r':'\r','f':'\f','b':'\b'},string={go:function(){state='ok';},firstokey:function(){key=value;state='colon';},okey:function(){key=value;state='colon';},ovalue:function(){state='ocomma';},firstavalue:function(){state='acomma';},avalue:function(){state='acomma';}},number={go:function(){state='ok';},ovalue:function(){state='ocomma';},firstavalue:function(){state='acomma';},avalue:function(){state='acomma';}},action={'{':{go:function(){stack.push({state:'ok'});container={};state='firstokey';},ovalue:function(){stack.push({container:container,state:'ocomma',key:key});container={};state='firstokey';},firstavalue:function(){stack.push({container:container,state:'acomma'});container={};state='firstokey';},avalue:function(){stack.push({container:container,state:'acomma'});container={};state='firstokey';}},'}':{firstokey:function(){var pop=stack.pop();value=container;container=pop.container;key=pop.key;state=pop.state;},ocomma:function(){var pop=stack.pop();container[key]=value;value=container;container=pop.container;key=pop.key;state=pop.state;}},'[':{go:function(){stack.push({state:'ok'});container=[];state='firstavalue';},ovalue:function(){stack.push({container:container,state:'ocomma',key:key});container=[];state='firstavalue';},firstavalue:function(){stack.push({container:container,state:'acomma'});container=[];state='firstavalue';},avalue:function(){stack.push({container:container,state:'acomma'});container=[];state='firstavalue';}},']':{firstavalue:function(){var pop=stack.pop();value=container;container=pop.container;key=pop.key;state=pop.state;},acomma:function(){var pop=stack.pop();container.push(value);value=container;container=pop.container;key=pop.key;state=pop.state;}},':':{colon:function(){if(Object.hasOwnProperty.call(container,key)){throw new SyntaxError('Duplicate key "'+key+'"');}
state='ovalue';}},',':{ocomma:function(){container[key]=value;state='okey';},acomma:function(){container.push(value);state='avalue';}},'true':{go:function(){value=true;state='ok';},ovalue:function(){value=true;state='ocomma';},firstavalue:function(){value=true;state='acomma';},avalue:function(){value=true;state='acomma';}},'false':{go:function(){value=false;state='ok';},ovalue:function(){value=false;state='ocomma';},firstavalue:function(){value=false;state='acomma';},avalue:function(){value=false;state='acomma';}},'null':{go:function(){value=null;state='ok';},ovalue:function(){value=null;state='ocomma';},firstavalue:function(){value=null;state='acomma';},avalue:function(){value=null;state='acomma';}}};function debackslashify(text){return text.replace(/\\(?:u(.{4})|([^u]))/g,function(a,b,c){return b?String.fromCharCode(parseInt(b,16)):escapes[c];});}
return function(source,reviver){var r,tx=/^[\x20\t\n\r]*(?:([,:\[\]{}]|true|false|null)|(-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?)|"((?:[^\r\n\t\\\"]|\\(?:["\\\/trnfb]|u[0-9a-fA-F]{4}))*)")/;state='go';stack=[];try{for(;;){r=tx.exec(source);if(!r){break;}
if(r[1]){action[r[1]][state]();}else if(r[2]){value=+r[2];number[state]();}else{value=debackslashify(r[3]);string[state]();}
source=source.slice(r[0].length);}}catch(e){state=e;}
if(state!=='ok'||(/[^\x20\t\n\r]/).test(source)){throw state instanceof SyntaxError?state:new SyntaxError('JSON');}
return typeof reviver==='function'?(function walk(holder,key){var k,v,value=holder[key];if(value&&typeof value==='object'){for(k in value){if(Object.prototype.hasOwnProperty.call(value,k)){v=walk(value,k);if(v!==undefined){value[k]=v;}else{delete value[k];}}}}
return reviver.call(holder,key,value);}({'':value},'')):value;};}());;
(function ($) {

/**
 * A progressbar object. Initialized with the given id. Must be inserted into
 * the DOM afterwards through progressBar.element.
 *
 * method is the function which will perform the HTTP request to get the
 * progress bar state. Either "GET" or "POST".
 *
 * e.g. pb = new progressBar('myProgressBar');
 *      some_element.appendChild(pb.element);
 */
Drupal.progressBar = function (id, updateCallback, method, errorCallback) {
  var pb = this;
  this.id = id;
  this.method = method || 'GET';
  this.updateCallback = updateCallback;
  this.errorCallback = errorCallback;

  // The WAI-ARIA setting aria-live="polite" will announce changes after users
  // have completed their current activity and not interrupt the screen reader.
  this.element = $('<div class="progress" aria-live="polite"></div>').attr('id', id);
  this.element.html('<div class="bar"><div class="filled"></div></div>' +
                    '<div class="percentage"></div>' +
                    '<div class="message">&nbsp;</div>');
};

/**
 * Set the percentage and status message for the progressbar.
 */
Drupal.progressBar.prototype.setProgress = function (percentage, message) {
  if (percentage >= 0 && percentage <= 100) {
    $('div.filled', this.element).css('width', percentage + '%');
    $('div.percentage', this.element).html(percentage + '%');
  }
  $('div.message', this.element).html(message);
  if (this.updateCallback) {
    this.updateCallback(percentage, message, this);
  }
};

/**
 * Start monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.startMonitoring = function (uri, delay) {
  this.delay = delay;
  this.uri = uri;
  this.sendPing();
};

/**
 * Stop monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.stopMonitoring = function () {
  clearTimeout(this.timer);
  // This allows monitoring to be stopped from within the callback.
  this.uri = null;
};

/**
 * Request progress data from server.
 */
Drupal.progressBar.prototype.sendPing = function () {
  if (this.timer) {
    clearTimeout(this.timer);
  }
  if (this.uri) {
    var pb = this;
    // When doing a post request, you need non-null data. Otherwise a
    // HTTP 411 or HTTP 406 (with Apache mod_security) error may result.
    $.ajax({
      type: this.method,
      url: this.uri,
      data: '',
      dataType: 'json',
      success: function (progress) {
        // Display errors.
        if (progress.status == 0) {
          pb.displayError(progress.data);
          return;
        }
        // Update display.
        pb.setProgress(progress.percentage, progress.message);
        // Schedule next timer.
        pb.timer = setTimeout(function () { pb.sendPing(); }, pb.delay);
      },
      error: function (xmlhttp) {
        pb.displayError(Drupal.ajaxError(xmlhttp, pb.uri));
      }
    });
  }
};

/**
 * Display errors on the page.
 */
Drupal.progressBar.prototype.displayError = function (string) {
  var error = $('<div class="messages error"></div>').html(string);
  $(this.element).before(error).hide();

  if (this.errorCallback) {
    this.errorCallback(this);
  }
};

})(jQuery);
;
(function ($) {
  Drupal.behaviors.eu_cookie_compliance_popup = {
    attach: function(context, settings) {
      $('body').not('.sliding-popup-processed').addClass('sliding-popup-processed').each(function() {
        try {
          var enabled = Drupal.settings.eu_cookie_compliance.popup_enabled;
          if(!enabled) {
            return;
          }
          if (!Drupal.eu_cookie_compliance.cookiesEnabled()) {
            return;
          } 
          var status = Drupal.eu_cookie_compliance.getCurrentStatus();
          var agreed_enabled = Drupal.settings.eu_cookie_compliance.popup_agreed_enabled;
          var popup_hide_agreed = Drupal.settings.eu_cookie_compliance.popup_hide_agreed;
          if (status == 0) {
            var next_status = 1;
            $('a, input[type=submit]').bind('click.eu_cookie_compliance', function(){
              if(!agreed_enabled) {
                Drupal.eu_cookie_compliance.setStatus(1);
                next_status = 2;
              }
              Drupal.eu_cookie_compliance.changeStatus(next_status);
            });

            $('.agree-button').click(function(){
              if(!agreed_enabled) {
                Drupal.eu_cookie_compliance.setStatus(1);
                next_status = 2;
              }
              Drupal.eu_cookie_compliance.changeStatus(next_status);
            });

            Drupal.eu_cookie_compliance.createPopup(Drupal.settings.eu_cookie_compliance.popup_html_info);
          } else if(status == 1) {
            Drupal.eu_cookie_compliance.createPopup(Drupal.settings.eu_cookie_compliance.popup_html_agreed);
            if (popup_hide_agreed) {
              $('a, input[type=submit]').bind('click.eu_cookie_compliance_hideagreed', function(){
                Drupal.eu_cookie_compliance.changeStatus(2);
              });
            }

          } else {
            return;
          }
        }
        catch(e) {
          return;
        }
      });
    }
  }

  Drupal.eu_cookie_compliance = {};

  Drupal.eu_cookie_compliance.createPopup = function(html) {
    var popup = $(html)
      .attr({"id": "sliding-popup"})
      .height(Drupal.settings.eu_cookie_compliance.popup_height)
      .width(Drupal.settings.eu_cookie_compliance.popup_width)
      .hide();
    if(Drupal.settings.eu_cookie_compliance.popup_position) {
      popup.prependTo("body");
      var height = popup.height();
      popup.show()
        .attr({"class": "sliding-popup-top"})
        .css({"top": -1 * height})
        .animate({top: 0}, Drupal.settings.eu_cookie_compliance.popup_delay);
    } else {
      popup.appendTo("body");
      height = popup.height();
      popup.show()
        .attr({"class": "sliding-popup-bottom"})
        .css({"bottom": -1 * height})
        .animate({bottom: 0}, Drupal.settings.eu_cookie_compliance.popup_delay)
    }
    Drupal.eu_cookie_compliance.attachEvents();
  }

  Drupal.eu_cookie_compliance.attachEvents = function() {
    var agreed_enabled = Drupal.settings.eu_cookie_compliance.popup_agreed_enabled;
    $('.find-more-button').click(function(){
      window.open(Drupal.settings.eu_cookie_compliance.popup_link);
    });
    $('.agree-button').click(function(){
      var next_status = 1;
      if(!agreed_enabled) {
        Drupal.eu_cookie_compliance.setStatus(1);
        next_status = 2;
      }
      $('a, input[type=submit]').unbind('click.eu_cookie_compliance');
      Drupal.eu_cookie_compliance.changeStatus(next_status);
    });
    $('.hide-popup-button').click(function(){
      Drupal.eu_cookie_compliance.changeStatus(2);
    });
  }

  Drupal.eu_cookie_compliance.getCurrentStatus = function() {
    var search = 'cookie-agreed-'+Drupal.settings.eu_cookie_compliance.popup_language+'=';
    var offset = document.cookie.indexOf(search);
    if (offset < 0) {
      return 0;
    }
    offset += search.length;
    var end = document.cookie.indexOf(';', offset);
    if (end == -1) {
      end = document.cookie.length;
    }
    var value = document.cookie.substring(offset, end);
    return parseInt(value);
  }

  Drupal.eu_cookie_compliance.changeStatus = function(value) {
    var status = Drupal.eu_cookie_compliance.getCurrentStatus();
    if (status == value) return;
    if(Drupal.settings.eu_cookie_compliance.popup_position) {
      $(".sliding-popup-top").animate({top: $("#sliding-popup").height() * -1}, Drupal.settings.eu_cookie_compliance.popup_delay, function () {
        if(status == 0) {
          $("#sliding-popup").html(Drupal.settings.eu_cookie_compliance.popup_html_agreed).animate({top: 0}, Drupal.settings.eu_cookie_compliance.popup_delay);
          Drupal.eu_cookie_compliance.attachEvents();
        }
        if(status == 1) {
          $("#sliding-popup").remove();
        }
      })
    } else {
      $(".sliding-popup-bottom").animate({bottom: $("#sliding-popup").height() * -1}, Drupal.settings.eu_cookie_compliance.popup_delay, function () {
        if(status == 0) {
          $("#sliding-popup").html(Drupal.settings.eu_cookie_compliance.popup_html_agreed).animate({bottom: 0}, Drupal.settings.eu_cookie_compliance.popup_delay)
          Drupal.eu_cookie_compliance.attachEvents();
        }
        if(status == 1) {
          $("#sliding-popup").remove();
        }
      ;})
    }
    Drupal.eu_cookie_compliance.setStatus(value);
  }

  Drupal.eu_cookie_compliance.setStatus = function(status) {
    var date = new Date();
    date.setDate(date.getDate() + 100);
    document.cookie = "cookie-agreed-"+Drupal.settings.eu_cookie_compliance.popup_language + "="+status+";expires=" + date.toUTCString() + ";path=" + Drupal.settings.basePath;
  }

  Drupal.eu_cookie_compliance.hasAgreed = function() {
    var status = Drupal.eu_cookie_compliance.getCurrentStatus();
    if(status == 1 || status == 2) {
      return true;
    }
    return false;
  }
  
  Drupal.eu_cookie_compliance.cookiesEnabled = function() {
    var cookieEnabled = (navigator.cookieEnabled) ? true : false;
      if (typeof navigator.cookieEnabled == "undefined" && !cookieEnabled) { 
        document.cookie="testcookie";
        cookieEnabled = (document.cookie.indexOf("testcookie") != -1) ? true : false;
      }
    return (cookieEnabled);
  }
  
})(jQuery);;

(function ($) {
  Drupal.Panels = Drupal.Panels || {};

  Drupal.Panels.autoAttach = function() {
    if ($.browser.msie) {
      // If IE, attach a hover event so we can see our admin links.
      $("div.panel-pane").hover(
        function() {
          $('div.panel-hide', this).addClass("panel-hide-hover"); return true;
        },
        function() {
          $('div.panel-hide', this).removeClass("panel-hide-hover"); return true;
        }
      );
      $("div.admin-links").hover(
        function() {
          $(this).addClass("admin-links-hover"); return true;
        },
        function(){
          $(this).removeClass("admin-links-hover"); return true;
        }
      );
    }
  };

  $(Drupal.Panels.autoAttach);
})(jQuery);
;
(function ($) {
  Drupal.viewsSlideshow = Drupal.viewsSlideshow || {};

  /**
   * Views Slideshow Controls
   */
  Drupal.viewsSlideshowControls = Drupal.viewsSlideshowControls || {};

  /**
   * Implement the play hook for controls.
   */
  Drupal.viewsSlideshowControls.play = function (options) {
    // Route the control call to the correct control type.
    // Need to use try catch so we don't have to check to make sure every part
    // of the object is defined.
    try {
      if (typeof Drupal.settings.viewsSlideshowControls[options.slideshowID].top.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].top.type].play == 'function') {
        Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].top.type].play(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }

    try {
      if (typeof Drupal.settings.viewsSlideshowControls[options.slideshowID].bottom.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].bottom.type].play == 'function') {
        Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].bottom.type].play(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }
  };

  /**
   * Implement the pause hook for controls.
   */
  Drupal.viewsSlideshowControls.pause = function (options) {
    // Route the control call to the correct control type.
    // Need to use try catch so we don't have to check to make sure every part
    // of the object is defined.
    try {
      if (typeof Drupal.settings.viewsSlideshowControls[options.slideshowID].top.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].top.type].pause == 'function') {
        Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].top.type].pause(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }

    try {
      if (typeof Drupal.settings.viewsSlideshowControls[options.slideshowID].bottom.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].bottom.type].pause == 'function') {
        Drupal[Drupal.settings.viewsSlideshowControls[options.slideshowID].bottom.type].pause(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }
  };


  /**
   * Views Slideshow Text Controls
   */

  // Add views slieshow api calls for views slideshow text controls.
  Drupal.behaviors.viewsSlideshowControlsText = {
    attach: function (context) {

      // Process previous link
      $('.views_slideshow_controls_text_previous:not(.views-slideshow-controls-text-previous-processed)', context).addClass('views-slideshow-controls-text-previous-processed').each(function() {
        var uniqueID = $(this).attr('id').replace('views_slideshow_controls_text_previous_', '');
        $(this).click(function() {
          Drupal.viewsSlideshow.action({ "action": 'previousSlide', "slideshowID": uniqueID });
          return false;
        });
      });

      // Process next link
      $('.views_slideshow_controls_text_next:not(.views-slideshow-controls-text-next-processed)', context).addClass('views-slideshow-controls-text-next-processed').each(function() {
        var uniqueID = $(this).attr('id').replace('views_slideshow_controls_text_next_', '');
        $(this).click(function() {
          Drupal.viewsSlideshow.action({ "action": 'nextSlide', "slideshowID": uniqueID });
          return false;
        });
      });

      // Process pause link
      $('.views_slideshow_controls_text_pause:not(.views-slideshow-controls-text-pause-processed)', context).addClass('views-slideshow-controls-text-pause-processed').each(function() {
        var uniqueID = $(this).attr('id').replace('views_slideshow_controls_text_pause_', '');
        $(this).click(function() {
          if (Drupal.settings.viewsSlideshow[uniqueID].paused) {
            Drupal.viewsSlideshow.action({ "action": 'play', "slideshowID": uniqueID, "force": true });
          }
          else {
            Drupal.viewsSlideshow.action({ "action": 'pause', "slideshowID": uniqueID, "force": true });
          }
          return false;
        });
      });
    }
  };

  Drupal.viewsSlideshowControlsText = Drupal.viewsSlideshowControlsText || {};

  /**
   * Implement the pause hook for text controls.
   */
  Drupal.viewsSlideshowControlsText.pause = function (options) {
    var pauseText = Drupal.theme.prototype['viewsSlideshowControlsPause'] ? Drupal.theme('viewsSlideshowControlsPause') : '';
    $('#views_slideshow_controls_text_pause_' + options.slideshowID + ' a').text(pauseText);
  };

  /**
   * Implement the play hook for text controls.
   */
  Drupal.viewsSlideshowControlsText.play = function (options) {
    var playText = Drupal.theme.prototype['viewsSlideshowControlsPlay'] ? Drupal.theme('viewsSlideshowControlsPlay') : '';
    $('#views_slideshow_controls_text_pause_' + options.slideshowID + ' a').text(playText);
  };

  // Theme the resume control.
  Drupal.theme.prototype.viewsSlideshowControlsPause = function () {
    return Drupal.t('Resume');
  };

  // Theme the pause control.
  Drupal.theme.prototype.viewsSlideshowControlsPlay = function () {
    return Drupal.t('Pause');
  };

  /**
   * Views Slideshow Pager
   */
  Drupal.viewsSlideshowPager = Drupal.viewsSlideshowPager || {};

  /**
   * Implement the transitionBegin hook for pagers.
   */
  Drupal.viewsSlideshowPager.transitionBegin = function (options) {
    // Route the pager call to the correct pager type.
    // Need to use try catch so we don't have to check to make sure every part
    // of the object is defined.
    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].transitionBegin == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].transitionBegin(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }

    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].transitionBegin == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].transitionBegin(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }
  };

  /**
   * Implement the goToSlide hook for pagers.
   */
  Drupal.viewsSlideshowPager.goToSlide = function (options) {
    // Route the pager call to the correct pager type.
    // Need to use try catch so we don't have to check to make sure every part
    // of the object is defined.
    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].goToSlide == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].goToSlide(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }

    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].goToSlide == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].goToSlide(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }
  };

  /**
   * Implement the previousSlide hook for pagers.
   */
  Drupal.viewsSlideshowPager.previousSlide = function (options) {
    // Route the pager call to the correct pager type.
    // Need to use try catch so we don't have to check to make sure every part
    // of the object is defined.
    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].previousSlide == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].previousSlide(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }

    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].previousSlide == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].previousSlide(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }
  };

  /**
   * Implement the nextSlide hook for pagers.
   */
  Drupal.viewsSlideshowPager.nextSlide = function (options) {
    // Route the pager call to the correct pager type.
    // Need to use try catch so we don't have to check to make sure every part
    // of the object is defined.
    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].nextSlide == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].top.type].nextSlide(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }

    try {
      if (typeof Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type != "undefined" && typeof Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].nextSlide == 'function') {
        Drupal[Drupal.settings.viewsSlideshowPager[options.slideshowID].bottom.type].nextSlide(options);
      }
    }
    catch(err) {
      // Don't need to do anything on error.
    }
  };


  /**
   * Views Slideshow Pager Fields
   */

  // Add views slieshow api calls for views slideshow pager fields.
  Drupal.behaviors.viewsSlideshowPagerFields = {
    attach: function (context) {
      // Process pause on hover.
      $('.views_slideshow_pager_field:not(.views-slideshow-pager-field-processed)', context).addClass('views-slideshow-pager-field-processed').each(function() {
        // Parse out the location and unique id from the full id.
        var pagerInfo = $(this).attr('id').split('_');
        var location = pagerInfo[2];
        pagerInfo.splice(0, 3);
        var uniqueID = pagerInfo.join('_');

        // Add the activate and pause on pager hover event to each pager item.
        if (Drupal.settings.viewsSlideshowPagerFields[uniqueID][location].activatePauseOnHover) {
          $(this).children().each(function(index, pagerItem) {
            var mouseIn = function() {
              Drupal.viewsSlideshow.action({ "action": 'goToSlide', "slideshowID": uniqueID, "slideNum": index });
              Drupal.viewsSlideshow.action({ "action": 'pause', "slideshowID": uniqueID });
            }
            
            var mouseOut = function() {
              Drupal.viewsSlideshow.action({ "action": 'play', "slideshowID": uniqueID });
            }
          
            if (jQuery.fn.hoverIntent) {
              $(pagerItem).hoverIntent(mouseIn, mouseOut);
            }
            else {
              $(pagerItem).hover(mouseIn, mouseOut);
            }
            
          });
        }
        else {
          $(this).children().each(function(index, pagerItem) {
            $(pagerItem).click(function() {
              Drupal.viewsSlideshow.action({ "action": 'goToSlide', "slideshowID": uniqueID, "slideNum": index });
            });
          });
        }
      });
    }
  };

  Drupal.viewsSlideshowPagerFields = Drupal.viewsSlideshowPagerFields || {};

  /**
   * Implement the transitionBegin hook for pager fields pager.
   */
  Drupal.viewsSlideshowPagerFields.transitionBegin = function (options) {
    for (pagerLocation in Drupal.settings.viewsSlideshowPager[options.slideshowID]) {
      // Remove active class from pagers
      $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"]').removeClass('active');

      // Add active class to active pager.
      $('#views_slideshow_pager_field_item_'+ pagerLocation + '_' + options.slideshowID + '_' + options.slideNum).addClass('active');
    }

  };

  /**
   * Implement the goToSlide hook for pager fields pager.
   */
  Drupal.viewsSlideshowPagerFields.goToSlide = function (options) {
    for (pagerLocation in Drupal.settings.viewsSlideshowPager[options.slideshowID]) {
      // Remove active class from pagers
      $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"]').removeClass('active');

      // Add active class to active pager.
      $('#views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '_' + options.slideNum).addClass('active');
    }
  };

  /**
   * Implement the previousSlide hook for pager fields pager.
   */
  Drupal.viewsSlideshowPagerFields.previousSlide = function (options) {
    for (pagerLocation in Drupal.settings.viewsSlideshowPager[options.slideshowID]) {
      // Get the current active pager.
      var pagerNum = $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"].active').attr('id').replace('views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '_', '');

      // If we are on the first pager then activate the last pager.
      // Otherwise activate the previous pager.
      if (pagerNum == 0) {
        pagerNum = $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"]').length() - 1;
      }
      else {
        pagerNum--;
      }

      // Remove active class from pagers
      $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"]').removeClass('active');

      // Add active class to active pager.
      $('#views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '_' + pagerNum).addClass('active');
    }
  };

  /**
   * Implement the nextSlide hook for pager fields pager.
   */
  Drupal.viewsSlideshowPagerFields.nextSlide = function (options) {
    for (pagerLocation in Drupal.settings.viewsSlideshowPager[options.slideshowID]) {
      // Get the current active pager.
      var pagerNum = $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"].active').attr('id').replace('views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '_', '');
      var totalPagers = $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"]').length();

      // If we are on the last pager then activate the first pager.
      // Otherwise activate the next pager.
      pagerNum++;
      if (pagerNum == totalPagers) {
        pagerNum = 0;
      }

      // Remove active class from pagers
      $('[id^="views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '"]').removeClass('active');

      // Add active class to active pager.
      $('#views_slideshow_pager_field_item_' + pagerLocation + '_' + options.slideshowID + '_' + slideNum).addClass('active');
    }
  };


  /**
   * Views Slideshow Slide Counter
   */

  Drupal.viewsSlideshowSlideCounter = Drupal.viewsSlideshowSlideCounter || {};

  /**
   * Implement the transitionBegin for the slide counter.
   */
  Drupal.viewsSlideshowSlideCounter.transitionBegin = function (options) {
    $('#views_slideshow_slide_counter_' + options.slideshowID + ' .num').text(options.slideNum + 1);
  };

  /**
   * This is used as a router to process actions for the slideshow.
   */
  Drupal.viewsSlideshow.action = function (options) {
    // Set default values for our return status.
    var status = {
      'value': true,
      'text': ''
    }

    // If an action isn't specified return false.
    if (typeof options.action == 'undefined' || options.action == '') {
      status.value = false;
      status.text =  Drupal.t('There was no action specified.');
      return error;
    }

    // If we are using pause or play switch paused state accordingly.
    if (options.action == 'pause') {
      Drupal.settings.viewsSlideshow[options.slideshowID].paused = 1;
      // If the calling method is forcing a pause then mark it as such.
      if (options.force) {
        Drupal.settings.viewsSlideshow[options.slideshowID].pausedForce = 1;
      }
    }
    else if (options.action == 'play') {
      // If the slideshow isn't forced pause or we are forcing a play then play
      // the slideshow.
      // Otherwise return telling the calling method that it was forced paused.
      if (!Drupal.settings.viewsSlideshow[options.slideshowID].pausedForce || options.force) {
        Drupal.settings.viewsSlideshow[options.slideshowID].paused = 0;
        Drupal.settings.viewsSlideshow[options.slideshowID].pausedForce = 0;
      }
      else {
        status.value = false;
        status.text += ' ' + Drupal.t('This slideshow is forced paused.');
        return status;
      }
    }

    // We use a switch statement here mainly just to limit the type of actions
    // that are available.
    switch (options.action) {
      case "goToSlide":
      case "transitionBegin":
      case "transitionEnd":
        // The three methods above require a slide number. Checking if it is
        // defined and it is a number that is an integer.
        if (typeof options.slideNum == 'undefined' || typeof options.slideNum !== 'number' || parseInt(options.slideNum) != (options.slideNum - 0)) {
          status.value = false;
          status.text = Drupal.t('An invalid integer was specified for slideNum.');
        }
      case "pause":
      case "play":
      case "nextSlide":
      case "previousSlide":
        // Grab our list of methods.
        var methods = Drupal.settings.viewsSlideshow[options.slideshowID]['methods'];

        // if the calling method specified methods that shouldn't be called then
        // exclude calling them.
        var excludeMethodsObj = {};
        if (typeof options.excludeMethods !== 'undefined') {
          // We need to turn the excludeMethods array into an object so we can use the in
          // function.
          for (var i=0; i < excludeMethods.length; i++) {
            excludeMethodsObj[excludeMethods[i]] = '';
          }
        }

        // Call every registered method and don't call excluded ones.
        for (i = 0; i < methods[options.action].length; i++) {
          if (Drupal[methods[options.action][i]] != undefined && typeof Drupal[methods[options.action][i]][options.action] == 'function' && !(methods[options.action][i] in excludeMethodsObj)) {
            Drupal[methods[options.action][i]][options.action](options);
          }
        }
        break;

      // If it gets here it's because it's an invalid action.
      default:
        status.value = false;
        status.text = Drupal.t('An invalid action "!action" was specified.', { "!action": options.action });
    }
    return status;
  };
})(jQuery);
;
(function ($) {

/**
 * Attaches double-click behavior to toggle full path of Krumo elements.
 */
Drupal.behaviors.devel = {
  attach: function (context, settings) {

    // Add hint to footnote
    $('.krumo-footnote .krumo-call').before('<img style="vertical-align: middle;" title="Click to expand. Double-click to show path." src="' + Drupal.settings.basePath + 'misc/help.png"/>');

    var krumo_name = [];
    var krumo_type = [];

    function krumo_traverse(el) {
      krumo_name.push($(el).html());
      krumo_type.push($(el).siblings('em').html().match(/\w*/)[0]);

      if ($(el).closest('.krumo-nest').length > 0) {
        krumo_traverse($(el).closest('.krumo-nest').prev().find('.krumo-name'));
      }
    }

    $('.krumo-child > div:first-child', context).dblclick(
      function(e) {
        if ($(this).find('> .krumo-php-path').length > 0) {
          // Remove path if shown.
          $(this).find('> .krumo-php-path').remove();
        }
        else {
          // Get elements.
          krumo_traverse($(this).find('> a.krumo-name'));

          // Create path.
          var krumo_path_string = '';
          for (var i = krumo_name.length - 1; i >= 0; --i) {
            // Start element.
            if ((krumo_name.length - 1) == i)
              krumo_path_string += '$' + krumo_name[i];

            if (typeof krumo_name[(i-1)] !== 'undefined') {
              if (krumo_type[i] == 'Array') {
                krumo_path_string += "[";
                if (!/^\d*$/.test(krumo_name[(i-1)]))
                  krumo_path_string += "'";
                krumo_path_string += krumo_name[(i-1)];
                if (!/^\d*$/.test(krumo_name[(i-1)]))
                  krumo_path_string += "'";
                krumo_path_string += "]";
              }
              if (krumo_type[i] == 'Object')
                krumo_path_string += '->' + krumo_name[(i-1)];
            }
          }
          $(this).append('<div class="krumo-php-path" style="font-family: Courier, monospace; font-weight: bold;">' + krumo_path_string + '</div>');

          // Reset arrays.
          krumo_name = [];
          krumo_type = [];
        }
      }
    );
  }
};

})(jQuery);
;
/*!
 * jCarousel - Riding carousels with jQuery
 *   http://sorgalla.com/jcarousel/
 *
 * Copyright (c) 2006 Jan Sorgalla (http://sorgalla.com)
 * Dual licensed under the MIT (http://www.opensource.org/licenses/mit-license.php)
 * and GPL (http://www.opensource.org/licenses/gpl-license.php) licenses.
 *
 * Built on top of the jQuery library
 *   http://jquery.com
 *
 * Inspired by the "Carousel Component" by Bill Scott
 *   http://billwscott.com/carousel/
 */

/*global window, jQuery */
(function($) {
    // Default configuration properties.
    var defaults = {
        vertical: false,
        rtl: false,
        start: 1,
        offset: 1,
        size: null,
        scroll: 3,
        visible: null,
        animation: 'normal',
        easing: 'swing',
        auto: 0,
        wrap: null,
        initCallback: null,
        setupCallback: null,
        reloadCallback: null,
        itemLoadCallback: null,
        itemFirstInCallback: null,
        itemFirstOutCallback: null,
        itemLastInCallback: null,
        itemLastOutCallback: null,
        itemVisibleInCallback: null,
        itemVisibleOutCallback: null,
        animationStepCallback: null,
        buttonNextHTML: '<div></div>',
        buttonPrevHTML: '<div></div>',
        buttonNextEvent: 'click',
        buttonPrevEvent: 'click',
        buttonNextCallback: null,
        buttonPrevCallback: null,
        itemFallbackDimension: null
    }, windowLoaded = false;

    $(window).bind('load.jcarousel', function() { windowLoaded = true; });

    /**
     * The jCarousel object.
     *
     * @constructor
     * @class jcarousel
     * @param e {HTMLElement} The element to create the carousel for.
     * @param o {Object} A set of key/value pairs to set as configuration properties.
     * @cat Plugins/jCarousel
     */
    $.jcarousel = function(e, o) {
        this.options    = $.extend({}, defaults, o || {});

        this.locked          = false;
        this.autoStopped     = false;

        this.container       = null;
        this.clip            = null;
        this.list            = null;
        this.buttonNext      = null;
        this.buttonPrev      = null;
        this.buttonNextState = null;
        this.buttonPrevState = null;

        // Only set if not explicitly passed as option
        if (!o || o.rtl === undefined) {
            this.options.rtl = ($(e).attr('dir') || $('html').attr('dir') || '').toLowerCase() == 'rtl';
        }

        this.wh = !this.options.vertical ? 'width' : 'height';
        this.lt = !this.options.vertical ? (this.options.rtl ? 'right' : 'left') : 'top';

        // Extract skin class
        var skin = '', split = e.className.split(' ');

        for (var i = 0; i < split.length; i++) {
            if (split[i].indexOf('jcarousel-skin') != -1) {
                $(e).removeClass(split[i]);
                skin = split[i];
                break;
            }
        }

        if (e.nodeName.toUpperCase() == 'UL' || e.nodeName.toUpperCase() == 'OL') {
            this.list      = $(e);
            this.clip      = this.list.parents('.jcarousel-clip');
            this.container = this.list.parents('.jcarousel-container');
        } else {
            this.container = $(e);
            this.list      = this.container.find('ul,ol').eq(0);
            this.clip      = this.container.find('.jcarousel-clip');
        }

        if (this.clip.size() === 0) {
            this.clip = this.list.wrap('<div></div>').parent();
        }

        if (this.container.size() === 0) {
            this.container = this.clip.wrap('<div></div>').parent();
        }

        if (skin !== '' && this.container.parent()[0].className.indexOf('jcarousel-skin') == -1) {
            this.container.wrap('<div class=" '+ skin + '"></div>');
        }

        this.buttonPrev = $('.jcarousel-prev', this.container);

        if (this.buttonPrev.size() === 0 && this.options.buttonPrevHTML !== null) {
            this.buttonPrev = $(this.options.buttonPrevHTML).appendTo(this.container);
        }

        this.buttonPrev.addClass(this.className('jcarousel-prev'));

        this.buttonNext = $('.jcarousel-next', this.container);

        if (this.buttonNext.size() === 0 && this.options.buttonNextHTML !== null) {
            this.buttonNext = $(this.options.buttonNextHTML).appendTo(this.container);
        }

        this.buttonNext.addClass(this.className('jcarousel-next'));

        this.clip.addClass(this.className('jcarousel-clip')).css({
            position: 'relative'
        });

        this.list.addClass(this.className('jcarousel-list')).css({
            overflow: 'hidden',
            position: 'relative',
            top: 0,
            margin: 0,
            padding: 0
        }).css((this.options.rtl ? 'right' : 'left'), 0);

        this.container.addClass(this.className('jcarousel-container')).css({
            position: 'relative'
        });

        if (!this.options.vertical && this.options.rtl) {
            this.container.addClass('jcarousel-direction-rtl').attr('dir', 'rtl');
        }

        var di = this.options.visible !== null ? Math.ceil(this.clipping() / this.options.visible) : null;
        var li = this.list.children('li');

        var self = this;

        if (li.size() > 0) {
            var wh = 0, j = this.options.offset;
            li.each(function() {
                self.format(this, j++);
                wh += self.dimension(this, di);
            });

            this.list.css(this.wh, (wh + 100) + 'px');

            // Only set if not explicitly passed as option
            if (!o || o.size === undefined) {
                this.options.size = li.size();
            }
        }

        // For whatever reason, .show() does not work in Safari...
        this.container.css('display', 'block');
        this.buttonNext.css('display', 'block');
        this.buttonPrev.css('display', 'block');

        this.funcNext   = function() { self.next(); };
        this.funcPrev   = function() { self.prev(); };
        this.funcResize = function() { 
            if (self.resizeTimer) {
                clearTimeout(self.resizeTimer);
            }

            self.resizeTimer = setTimeout(function() {
                self.reload();
            }, 100);
        };

        if (this.options.initCallback !== null) {
            this.options.initCallback(this, 'init');
        }

        if (!windowLoaded && $.browser.safari) {
            this.buttons(false, false);
            $(window).bind('load.jcarousel', function() { self.setup(); });
        } else {
            this.setup();
        }
    };

    // Create shortcut for internal use
    var $jc = $.jcarousel;

    $jc.fn = $jc.prototype = {
        jcarousel: '0.2.8'
    };

    $jc.fn.extend = $jc.extend = $.extend;

    $jc.fn.extend({
        /**
         * Setups the carousel.
         *
         * @method setup
         * @return undefined
         */
        setup: function() {
            this.first       = null;
            this.last        = null;
            this.prevFirst   = null;
            this.prevLast    = null;
            this.animating   = false;
            this.timer       = null;
            this.resizeTimer = null;
            this.tail        = null;
            this.inTail      = false;

            if (this.locked) {
                return;
            }

            this.list.css(this.lt, this.pos(this.options.offset) + 'px');
            var p = this.pos(this.options.start, true);
            this.prevFirst = this.prevLast = null;
            this.animate(p, false);

            $(window).unbind('resize.jcarousel', this.funcResize).bind('resize.jcarousel', this.funcResize);

            if (this.options.setupCallback !== null) {
                this.options.setupCallback(this);
            }
        },

        /**
         * Clears the list and resets the carousel.
         *
         * @method reset
         * @return undefined
         */
        reset: function() {
            this.list.empty();

            this.list.css(this.lt, '0px');
            this.list.css(this.wh, '10px');

            if (this.options.initCallback !== null) {
                this.options.initCallback(this, 'reset');
            }

            this.setup();
        },

        /**
         * Reloads the carousel and adjusts positions.
         *
         * @method reload
         * @return undefined
         */
        reload: function() {
            if (this.tail !== null && this.inTail) {
                this.list.css(this.lt, $jc.intval(this.list.css(this.lt)) + this.tail);
            }

            this.tail   = null;
            this.inTail = false;

            if (this.options.reloadCallback !== null) {
                this.options.reloadCallback(this);
            }

            if (this.options.visible !== null) {
                var self = this;
                var di = Math.ceil(this.clipping() / this.options.visible), wh = 0, lt = 0;
                this.list.children('li').each(function(i) {
                    wh += self.dimension(this, di);
                    if (i + 1 < self.first) {
                        lt = wh;
                    }
                });

                this.list.css(this.wh, wh + 'px');
                this.list.css(this.lt, -lt + 'px');
            }

            this.scroll(this.first, false);
        },

        /**
         * Locks the carousel.
         *
         * @method lock
         * @return undefined
         */
        lock: function() {
            this.locked = true;
            this.buttons();
        },

        /**
         * Unlocks the carousel.
         *
         * @method unlock
         * @return undefined
         */
        unlock: function() {
            this.locked = false;
            this.buttons();
        },

        /**
         * Sets the size of the carousel.
         *
         * @method size
         * @return undefined
         * @param s {Number} The size of the carousel.
         */
        size: function(s) {
            if (s !== undefined) {
                this.options.size = s;
                if (!this.locked) {
                    this.buttons();
                }
            }

            return this.options.size;
        },

        /**
         * Checks whether a list element exists for the given index (or index range).
         *
         * @method get
         * @return bool
         * @param i {Number} The index of the (first) element.
         * @param i2 {Number} The index of the last element.
         */
        has: function(i, i2) {
            if (i2 === undefined || !i2) {
                i2 = i;
            }

            if (this.options.size !== null && i2 > this.options.size) {
                i2 = this.options.size;
            }

            for (var j = i; j <= i2; j++) {
                var e = this.get(j);
                if (!e.length || e.hasClass('jcarousel-item-placeholder')) {
                    return false;
                }
            }

            return true;
        },

        /**
         * Returns a jQuery object with list element for the given index.
         *
         * @method get
         * @return jQuery
         * @param i {Number} The index of the element.
         */
        get: function(i) {
            return $('>.jcarousel-item-' + i, this.list);
        },

        /**
         * Adds an element for the given index to the list.
         * If the element already exists, it updates the inner html.
         * Returns the created element as jQuery object.
         *
         * @method add
         * @return jQuery
         * @param i {Number} The index of the element.
         * @param s {String} The innerHTML of the element.
         */
        add: function(i, s) {
            var e = this.get(i), old = 0, n = $(s);

            if (e.length === 0) {
                var c, j = $jc.intval(i);
                e = this.create(i);
                while (true) {
                    c = this.get(--j);
                    if (j <= 0 || c.length) {
                        if (j <= 0) {
                            this.list.prepend(e);
                        } else {
                            c.after(e);
                        }
                        break;
                    }
                }
            } else {
                old = this.dimension(e);
            }

            if (n.get(0).nodeName.toUpperCase() == 'LI') {
                e.replaceWith(n);
                e = n;
            } else {
                e.empty().append(s);
            }

            this.format(e.removeClass(this.className('jcarousel-item-placeholder')), i);

            var di = this.options.visible !== null ? Math.ceil(this.clipping() / this.options.visible) : null;
            var wh = this.dimension(e, di) - old;

            if (i > 0 && i < this.first) {
                this.list.css(this.lt, $jc.intval(this.list.css(this.lt)) - wh + 'px');
            }

            this.list.css(this.wh, $jc.intval(this.list.css(this.wh)) + wh + 'px');

            return e;
        },

        /**
         * Removes an element for the given index from the list.
         *
         * @method remove
         * @return undefined
         * @param i {Number} The index of the element.
         */
        remove: function(i) {
            var e = this.get(i);

            // Check if item exists and is not currently visible
            if (!e.length || (i >= this.first && i <= this.last)) {
                return;
            }

            var d = this.dimension(e);

            if (i < this.first) {
                this.list.css(this.lt, $jc.intval(this.list.css(this.lt)) + d + 'px');
            }

            e.remove();

            this.list.css(this.wh, $jc.intval(this.list.css(this.wh)) - d + 'px');
        },

        /**
         * Moves the carousel forwards.
         *
         * @method next
         * @return undefined
         */
        next: function() {
            if (this.tail !== null && !this.inTail) {
                this.scrollTail(false);
            } else {
                this.scroll(((this.options.wrap == 'both' || this.options.wrap == 'last') && this.options.size !== null && this.last == this.options.size) ? 1 : this.first + this.options.scroll);
            }
        },

        /**
         * Moves the carousel backwards.
         *
         * @method prev
         * @return undefined
         */
        prev: function() {
            if (this.tail !== null && this.inTail) {
                this.scrollTail(true);
            } else {
                this.scroll(((this.options.wrap == 'both' || this.options.wrap == 'first') && this.options.size !== null && this.first == 1) ? this.options.size : this.first - this.options.scroll);
            }
        },

        /**
         * Scrolls the tail of the carousel.
         *
         * @method scrollTail
         * @return undefined
         * @param b {Boolean} Whether scroll the tail back or forward.
         */
        scrollTail: function(b) {
            if (this.locked || this.animating || !this.tail) {
                return;
            }

            this.pauseAuto();

            var pos  = $jc.intval(this.list.css(this.lt));

            pos = !b ? pos - this.tail : pos + this.tail;
            this.inTail = !b;

            // Save for callbacks
            this.prevFirst = this.first;
            this.prevLast  = this.last;

            this.animate(pos);
        },

        /**
         * Scrolls the carousel to a certain position.
         *
         * @method scroll
         * @return undefined
         * @param i {Number} The index of the element to scoll to.
         * @param a {Boolean} Flag indicating whether to perform animation.
         */
        scroll: function(i, a) {
            if (this.locked || this.animating) {
                return;
            }

            this.pauseAuto();
            this.animate(this.pos(i), a);
        },

        /**
         * Prepares the carousel and return the position for a certian index.
         *
         * @method pos
         * @return {Number}
         * @param i {Number} The index of the element to scoll to.
         * @param fv {Boolean} Whether to force last item to be visible.
         */
        pos: function(i, fv) {
            var pos  = $jc.intval(this.list.css(this.lt));

            if (this.locked || this.animating) {
                return pos;
            }

            if (this.options.wrap != 'circular') {
                i = i < 1 ? 1 : (this.options.size && i > this.options.size ? this.options.size : i);
            }

            var back = this.first > i;

            // Create placeholders, new list width/height
            // and new list position
            var f = this.options.wrap != 'circular' && this.first <= 1 ? 1 : this.first;
            var c = back ? this.get(f) : this.get(this.last);
            var j = back ? f : f - 1;
            var e = null, l = 0, p = false, d = 0, g;

            while (back ? --j >= i : ++j < i) {
                e = this.get(j);
                p = !e.length;
                if (e.length === 0) {
                    e = this.create(j).addClass(this.className('jcarousel-item-placeholder'));
                    c[back ? 'before' : 'after' ](e);

                    if (this.first !== null && this.options.wrap == 'circular' && this.options.size !== null && (j <= 0 || j > this.options.size)) {
                        g = this.get(this.index(j));
                        if (g.length) {
                            e = this.add(j, g.clone(true));
                        }
                    }
                }

                c = e;
                d = this.dimension(e);

                if (p) {
                    l += d;
                }

                if (this.first !== null && (this.options.wrap == 'circular' || (j >= 1 && (this.options.size === null || j <= this.options.size)))) {
                    pos = back ? pos + d : pos - d;
                }
            }

            // Calculate visible items
            var clipping = this.clipping(), cache = [], visible = 0, v = 0;
            c = this.get(i - 1);
            j = i;

            while (++visible) {
                e = this.get(j);
                p = !e.length;
                if (e.length === 0) {
                    e = this.create(j).addClass(this.className('jcarousel-item-placeholder'));
                    // This should only happen on a next scroll
                    if (c.length === 0) {
                        this.list.prepend(e);
                    } else {
                        c[back ? 'before' : 'after' ](e);
                    }

                    if (this.first !== null && this.options.wrap == 'circular' && this.options.size !== null && (j <= 0 || j > this.options.size)) {
                        g = this.get(this.index(j));
                        if (g.length) {
                            e = this.add(j, g.clone(true));
                        }
                    }
                }

                c = e;
                d = this.dimension(e);
                if (d === 0) {
                    throw new Error('jCarousel: No width/height set for items. This will cause an infinite loop. Aborting...');
                }

                if (this.options.wrap != 'circular' && this.options.size !== null && j > this.options.size) {
                    cache.push(e);
                } else if (p) {
                    l += d;
                }

                v += d;

                if (v >= clipping) {
                    break;
                }

                j++;
            }

             // Remove out-of-range placeholders
            for (var x = 0; x < cache.length; x++) {
                cache[x].remove();
            }

            // Resize list
            if (l > 0) {
                this.list.css(this.wh, this.dimension(this.list) + l + 'px');

                if (back) {
                    pos -= l;
                    this.list.css(this.lt, $jc.intval(this.list.css(this.lt)) - l + 'px');
                }
            }

            // Calculate first and last item
            var last = i + visible - 1;
            if (this.options.wrap != 'circular' && this.options.size && last > this.options.size) {
                last = this.options.size;
            }

            if (j > last) {
                visible = 0;
                j = last;
                v = 0;
                while (++visible) {
                    e = this.get(j--);
                    if (!e.length) {
                        break;
                    }
                    v += this.dimension(e);
                    if (v >= clipping) {
                        break;
                    }
                }
            }

            var first = last - visible + 1;
            if (this.options.wrap != 'circular' && first < 1) {
                first = 1;
            }

            if (this.inTail && back) {
                pos += this.tail;
                this.inTail = false;
            }

            this.tail = null;
            if (this.options.wrap != 'circular' && last == this.options.size && (last - visible + 1) >= 1) {
                var m = $jc.intval(this.get(last).css(!this.options.vertical ? 'marginRight' : 'marginBottom'));
                if ((v - m) > clipping) {
                    this.tail = v - clipping - m;
                }
            }

            if (fv && i === this.options.size && this.tail) {
                pos -= this.tail;
                this.inTail = true;
            }

            // Adjust position
            while (i-- > first) {
                pos += this.dimension(this.get(i));
            }

            // Save visible item range
            this.prevFirst = this.first;
            this.prevLast  = this.last;
            this.first     = first;
            this.last      = last;

            return pos;
        },

        /**
         * Animates the carousel to a certain position.
         *
         * @method animate
         * @return undefined
         * @param p {Number} Position to scroll to.
         * @param a {Boolean} Flag indicating whether to perform animation.
         */
        animate: function(p, a) {
            if (this.locked || this.animating) {
                return;
            }

            this.animating = true;

            var self = this;
            var scrolled = function() {
                self.animating = false;

                if (p === 0) {
                    self.list.css(self.lt,  0);
                }

                if (!self.autoStopped && (self.options.wrap == 'circular' || self.options.wrap == 'both' || self.options.wrap == 'last' || self.options.size === null || self.last < self.options.size || (self.last == self.options.size && self.tail !== null && !self.inTail))) {
                    self.startAuto();
                }

                self.buttons();
                self.notify('onAfterAnimation');

                // This function removes items which are appended automatically for circulation.
                // This prevents the list from growing infinitely.
                if (self.options.wrap == 'circular' && self.options.size !== null) {
                    for (var i = self.prevFirst; i <= self.prevLast; i++) {
                        if (i !== null && !(i >= self.first && i <= self.last) && (i < 1 || i > self.options.size)) {
                            self.remove(i);
                        }
                    }
                }
            };

            this.notify('onBeforeAnimation');

            // Animate
            if (!this.options.animation || a === false) {
                this.list.css(this.lt, p + 'px');
                scrolled();
            } else {
                var o = !this.options.vertical ? (this.options.rtl ? {'right': p} : {'left': p}) : {'top': p};
                // Define animation settings.
                var settings = {
                    duration: this.options.animation,
                    easing:   this.options.easing,
                    complete: scrolled
                };
                // If we have a step callback, specify it as well.
                if ($.isFunction(this.options.animationStepCallback)) {
                    settings.step = this.options.animationStepCallback;
                }
                // Start the animation.
                this.list.animate(o, settings);
            }
        },

        /**
         * Starts autoscrolling.
         *
         * @method auto
         * @return undefined
         * @param s {Number} Seconds to periodically autoscroll the content.
         */
        startAuto: function(s) {
            if (s !== undefined) {
                this.options.auto = s;
            }

            if (this.options.auto === 0) {
                return this.stopAuto();
            }

            if (this.timer !== null) {
                return;
            }

            this.autoStopped = false;

            var self = this;
            this.timer = window.setTimeout(function() { self.next(); }, this.options.auto * 1000);
        },

        /**
         * Stops autoscrolling.
         *
         * @method stopAuto
         * @return undefined
         */
        stopAuto: function() {
            this.pauseAuto();
            this.autoStopped = true;
        },

        /**
         * Pauses autoscrolling.
         *
         * @method pauseAuto
         * @return undefined
         */
        pauseAuto: function() {
            if (this.timer === null) {
                return;
            }

            window.clearTimeout(this.timer);
            this.timer = null;
        },

        /**
         * Sets the states of the prev/next buttons.
         *
         * @method buttons
         * @return undefined
         */
        buttons: function(n, p) {
            if (n == null) {
                n = !this.locked && this.options.size !== 0 && ((this.options.wrap && this.options.wrap != 'first') || this.options.size === null || this.last < this.options.size);
                if (!this.locked && (!this.options.wrap || this.options.wrap == 'first') && this.options.size !== null && this.last >= this.options.size) {
                    n = this.tail !== null && !this.inTail;
                }
            }

            if (p == null) {
                p = !this.locked && this.options.size !== 0 && ((this.options.wrap && this.options.wrap != 'last') || this.first > 1);
                if (!this.locked && (!this.options.wrap || this.options.wrap == 'last') && this.options.size !== null && this.first == 1) {
                    p = this.tail !== null && this.inTail;
                }
            }

            var self = this;

            if (this.buttonNext.size() > 0) {
                this.buttonNext.unbind(this.options.buttonNextEvent + '.jcarousel', this.funcNext);

                if (n) {
                    this.buttonNext.bind(this.options.buttonNextEvent + '.jcarousel', this.funcNext);
                }

                this.buttonNext[n ? 'removeClass' : 'addClass'](this.className('jcarousel-next-disabled')).attr('disabled', n ? false : true);

                if (this.options.buttonNextCallback !== null && this.buttonNext.data('jcarouselstate') != n) {
                    this.buttonNext.each(function() { self.options.buttonNextCallback(self, this, n); }).data('jcarouselstate', n);
                }
            } else {
                if (this.options.buttonNextCallback !== null && this.buttonNextState != n) {
                    this.options.buttonNextCallback(self, null, n);
                }
            }

            if (this.buttonPrev.size() > 0) {
                this.buttonPrev.unbind(this.options.buttonPrevEvent + '.jcarousel', this.funcPrev);

                if (p) {
                    this.buttonPrev.bind(this.options.buttonPrevEvent + '.jcarousel', this.funcPrev);
                }

                this.buttonPrev[p ? 'removeClass' : 'addClass'](this.className('jcarousel-prev-disabled')).attr('disabled', p ? false : true);

                if (this.options.buttonPrevCallback !== null && this.buttonPrev.data('jcarouselstate') != p) {
                    this.buttonPrev.each(function() { self.options.buttonPrevCallback(self, this, p); }).data('jcarouselstate', p);
                }
            } else {
                if (this.options.buttonPrevCallback !== null && this.buttonPrevState != p) {
                    this.options.buttonPrevCallback(self, null, p);
                }
            }

            this.buttonNextState = n;
            this.buttonPrevState = p;
        },

        /**
         * Notify callback of a specified event.
         *
         * @method notify
         * @return undefined
         * @param evt {String} The event name
         */
        notify: function(evt) {
            var state = this.prevFirst === null ? 'init' : (this.prevFirst < this.first ? 'next' : 'prev');

            // Load items
            this.callback('itemLoadCallback', evt, state);

            if (this.prevFirst !== this.first) {
                this.callback('itemFirstInCallback', evt, state, this.first);
                this.callback('itemFirstOutCallback', evt, state, this.prevFirst);
            }

            if (this.prevLast !== this.last) {
                this.callback('itemLastInCallback', evt, state, this.last);
                this.callback('itemLastOutCallback', evt, state, this.prevLast);
            }

            this.callback('itemVisibleInCallback', evt, state, this.first, this.last, this.prevFirst, this.prevLast);
            this.callback('itemVisibleOutCallback', evt, state, this.prevFirst, this.prevLast, this.first, this.last);
        },

        callback: function(cb, evt, state, i1, i2, i3, i4) {
            if (this.options[cb] == null || (typeof this.options[cb] != 'object' && evt != 'onAfterAnimation')) {
                return;
            }

            var callback = typeof this.options[cb] == 'object' ? this.options[cb][evt] : this.options[cb];

            if (!$.isFunction(callback)) {
                return;
            }

            var self = this;

            if (i1 === undefined) {
                callback(self, state, evt);
            } else if (i2 === undefined) {
                this.get(i1).each(function() { callback(self, this, i1, state, evt); });
            } else {
                var call = function(i) {
                    self.get(i).each(function() { callback(self, this, i, state, evt); });
                };
                for (var i = i1; i <= i2; i++) {
                    if (i !== null && !(i >= i3 && i <= i4)) {
                        call(i);
                    }
                }
            }
        },

        create: function(i) {
            return this.format('<li></li>', i);
        },

        format: function(e, i) {
            e = $(e);
            var split = e.get(0).className.split(' ');
            for (var j = 0; j < split.length; j++) {
                if (split[j].indexOf('jcarousel-') != -1) {
                    e.removeClass(split[j]);
                }
            }
            e.addClass(this.className('jcarousel-item')).addClass(this.className('jcarousel-item-' + i)).css({
                'float': (this.options.rtl ? 'right' : 'left'),
                'list-style': 'none'
            }).attr('jcarouselindex', i);
            return e;
        },

        className: function(c) {
            return c + ' ' + c + (!this.options.vertical ? '-horizontal' : '-vertical');
        },

        dimension: function(e, d) {
            var el = $(e);

            if (d == null) {
                return !this.options.vertical ?
                       (el.outerWidth(true) || $jc.intval(this.options.itemFallbackDimension)) :
                       (el.outerHeight(true) || $jc.intval(this.options.itemFallbackDimension));
            } else {
                var w = !this.options.vertical ?
                    d - $jc.intval(el.css('marginLeft')) - $jc.intval(el.css('marginRight')) :
                    d - $jc.intval(el.css('marginTop')) - $jc.intval(el.css('marginBottom'));

                $(el).css(this.wh, w + 'px');

                return this.dimension(el);
            }
        },

        clipping: function() {
            return !this.options.vertical ?
                this.clip[0].offsetWidth - $jc.intval(this.clip.css('borderLeftWidth')) - $jc.intval(this.clip.css('borderRightWidth')) :
                this.clip[0].offsetHeight - $jc.intval(this.clip.css('borderTopWidth')) - $jc.intval(this.clip.css('borderBottomWidth'));
        },

        index: function(i, s) {
            if (s == null) {
                s = this.options.size;
            }

            return Math.round((((i-1) / s) - Math.floor((i-1) / s)) * s) + 1;
        }
    });

    $jc.extend({
        /**
         * Gets/Sets the global default configuration properties.
         *
         * @method defaults
         * @return {Object}
         * @param d {Object} A set of key/value pairs to set as configuration properties.
         */
        defaults: function(d) {
            return $.extend(defaults, d || {});
        },

        intval: function(v) {
            v = parseInt(v, 10);
            return isNaN(v) ? 0 : v;
        },

        windowLoaded: function() {
            windowLoaded = true;
        }
    });

    /**
     * Creates a carousel for all matched elements.
     *
     * @example $("#mycarousel").jcarousel();
     * @before <ul id="mycarousel" class="jcarousel-skin-name"><li>First item</li><li>Second item</li></ul>
     * @result
     *
     * <div class="jcarousel-skin-name">
     *   <div class="jcarousel-container">
     *     <div class="jcarousel-clip">
     *       <ul class="jcarousel-list">
     *         <li class="jcarousel-item-1">First item</li>
     *         <li class="jcarousel-item-2">Second item</li>
     *       </ul>
     *     </div>
     *     <div disabled="disabled" class="jcarousel-prev jcarousel-prev-disabled"></div>
     *     <div class="jcarousel-next"></div>
     *   </div>
     * </div>
     *
     * @method jcarousel
     * @return jQuery
     * @param o {Hash|String} A set of key/value pairs to set as configuration properties or a method name to call on a formerly created instance.
     */
    $.fn.jcarousel = function(o) {
        if (typeof o == 'string') {
            var instance = $(this).data('jcarousel'), args = Array.prototype.slice.call(arguments, 1);
            return instance[o].apply(instance, args);
        } else {
            return this.each(function() {
                var instance = $(this).data('jcarousel');
                if (instance) {
                    if (o) {
                        $.extend(instance.options, o);
                    }
                    instance.reload();
                } else {
                    $(this).data('jcarousel', new $jc(this, o));
                }
            });
        }
    };

})(jQuery);
;
jQuery(document).ready(function($) {

  // to hide what's News label
  what_found = jQuery('#what-is-new-nofound').hasClass('nofound');
  what_news_found = jQuery('#what-is-new-news-nofound').hasClass('nofound');
  if (what_found && what_news_found) {
    jQuery('#what-is-new-nofound').addClass('hide');
  }
  // remove () from file size
  var content = jQuery(".file-size").text().replace(/[()]/g,'');
  jQuery(".file-size").html(content);

  // hide the open quotations
  jQuery('.toggle-quote-display').click(function(){
    jQuery(this).closest(".other-quotes").toggle();
  });

  // toggle quote finder
  jQuery('#block-akdn-custom-akdn-speech-tools .item-list > h3').siblings().css("display", "none");
  jQuery('#block-akdn-custom-akdn-speech-tools .item-list > h3').click(function(){
    jQuery(this).siblings().toggle();
  });

  // Toggle date filters.
  jQuery('#block-akdn-custom-akdn-date-filter .block-title').click(function(){
    jQuery(this).siblings().toggle();
  });

  // toggle speaker list
  jQuery('div#speech-speakers-list > h3').siblings().hide();
  jQuery('div#speech-speakers-list > h3').click(function(){
    jQuery(this).siblings().toggle();
  });

  jQuery('div#speech-speakers-list-more > h3').siblings().hide();
  jQuery('div#speech-speakers-list-more > h3').click(function(){
    jQuery(this).siblings().toggle();
    jQuery(this).toggle();
    jQuery('div#speech-speakers-list-more-hide > h3').show();
  });

  jQuery('div#speech-speakers-list-more-hide > h3').hide();
  jQuery('div#speech-speakers-list-more-hide > h3').click(function(){
    jQuery(this).toggle();
    jQuery('div#speech-speakers-list-more > h3').siblings().hide();
    jQuery('div#speech-speakers-list-more > h3').show();
    jQuery('#speech-speakers-list').focus();
  });

  // Toggle facets.
  jQuery('section.block-facetapi > div > h2').click(function(){
    jQuery(this).siblings().toggle();
  });


  // $('#block-views-exp-speeches-page #edit-field-publish-date-value-wrapper select').selectToUISlider().hide();

  // Set up for jCarousel project display.
  var breaks = {
    normal: 980,
    narrow: 740,
  };
  var w = $(window).width();
  var vis = 0;
  if (w >= breaks.normal) {
    vis = 3;
  }
  else if (w < breaks.normal && w >= breaks.narrow) {
    vis = 2;
  }
  else {
    vis = 1;
  }
  var select = '';
  /*if ($('#block-views-projects-block .carousel').length > 0) {
    select = '#block-views-projects-block .carousel';
  } else if ($('.view-id-projects.view-display-id-block_3 .carousel').length > 0) {
    select = '.view-id-projects.view-display-id-block_3 .carousel';
  }*/
  /*if ($('.view-id-projects .carousel').length > 0) {
    select = '.view-id-projects .carousel';
  }
  var numProjects = $(select + ' li').length;
  if (numProjects <= vis) {
    $(select).jcarousel({
      visible: vis,
      scroll: vis,
      buttonNextHTML: null,
      buttonPrevHTML: null
    });
  } else {
    $(select).jcarousel({
      visible: vis,
      scroll: vis,
      buttonNextHTML: "<div></div>",
      buttonPrevHTML: "<div></div>",
    });
  }*/

  var views_ids = new Array("#views-exposed-form-press-releases-page","#views-exposed-form-articles-page","#views-exposed-form-speeches-page","#views-exposed-form-projects-page-1","#views-exposed-form-publications-page","#views-exposed-form-galleries-page","#views-exposed-form-podcasts-page","#views-exposed-form-events-page-past","#views-exposed-form-articles-page-1","#views-exposed-form-speech-themes-block-1");

  for (x in views_ids) {
    if ($(views_ids[x]).length) {
      $(views_ids[x]+" #edit-field-agency-tid-wrapper select, "+views_ids[x]+" #edit-field-focus-area-tid-wrapper select, "+views_ids[x]+" #edit-field-country-tid-wrapper select, "+views_ids[x]+" #edit-tid-wrapper select, "+views_ids[x]+" #edit-field-speech-speaker-nid, "+views_ids[x]+" #edit-field-speech-themes-tid-wrapper select").chosen();
    }
  }

  views_id = "#views-exposed-form-akaa-projects-page";
  if ($("#views-exposed-form-akaa-projects-page").length) {
    $(views_id+" #edit-field-region-tid-wrapper select, "+views_id+" #edit-field-arch-country-tid-wrapper select, "+views_id+" #edit-field-city-tid-wrapper select, "+views_id+" #edit-field-building-type-tid-wrapper select").chosen();
  }

});

(function ($) {

  Drupal.behaviors.akdnCustom = {
    attach: function (context, settings) {
      var x, w;
      var breaks = {
        normal: 980,
        narrow: 740,
        curr: ''
      };
      var howMany = {
        normal: 3,
        narrow: 2,
        mobile: 1
      };
      w = $(window).width();
      if (w >= breaks.normal) {
        breaks.curr = 'normal';
      }
      else if (w < breaks.normal && w >= breaks.narrow) {
        breaks.curr = 'narrow';
      }
      else {
        breaks.curr = 'mobile';
      }

      function resizedw(){
        var width = $(window).width();
        var change = false;
        var toChange = '';
        //figure out which display we currently have && what the new display is
        if (width >= breaks.normal) {
          console.log('change to normal');
          if (breaks.curr != 'normal') {
            change = true;
            toChange = 'normal';
          }
        }
        else if (width < breaks.normal && width >= breaks.narrow) {
          if (breaks.curr != 'narrow') {
            change = true;
            toChange = 'narrow';
          }
        }
        else {
          if (breaks.curr != 'mobile') {
            change = true;
            toChange = 'mobile';
          }
        }
        //console.log(toChange);
        if (change) {
        /*  var oldCl = 'jcarousel-skin-akdn';
          if (breaks.curr != 'normal') {
            oldCl += '-' + breaks.curr;
          }
          var newCl = 'jcarousel-skin-akdn';
          if (toChange != 'normal') {
            newCl += '-' + toChange;
          }
          $('#block-views-projects-block ul').removeClass(oldCl);
          $('#block-views-projects-block ul').addClass(newCl);
        */
          breaks.curr = toChange;
          var vis = howMany[toChange];

          var select = '';
          /*if ($('#block-views-projects-block .carousel').length > 0) {
            select = '#block-views-projects-block .carousel';
          } else if ($('.view-id-projects.view-display-id-block_3 .carousel').length > 0) {
            select = '.view-id-projects.view-display-id-block_3 .carousel';
          }*/
          /*if ($('.view-id-projects .carousel').length > 0) {
            select = '.view-id-projects .carousel';
          }
          var numProjects = $(select + ' li').length;
          //$('#block-views-projects-block .carousel').jcarousel('destroy');
          if (numProjects <= vis) {
            $(select).jcarousel({
              visible: vis,
              scroll: vis,
              //buttonNextHTML: null,
              //buttonPrevHTML: null
            });
          } else {
            $(select).jcarousel({
              visible: vis,
              scroll: vis,
              //buttonNextHTML: "<div></div>",
              //buttonPrevHTML: "<div></div>",
            });
          }
          $(select).jcarousel('reload');*/
          /*if ($('.view-id-projects.view-display-id-block_3 .carousel').length > 0) {
            $('.view-id-projects.view-display-id-block_3 .carousel').jcarousel({
              visible: vis,
              scroll: vis,
            });
            $('.view-id-projects.view-display-id-block_3 .carousel').jcarousel('reload');
          }*/
        }

      }

      $(window).resize(function() {
          clearTimeout(x);
          x = setTimeout(function() {
              resizedw();
          }, 100);
      });

      // Hide the submit button on the contact form when no body field is available.
      // We hook in to the settings that webform conditional is provididng.
      if ($('form#webform-client-form-4310').length){
        var showOn = Drupal.settings.webform_conditional.fields.subject.dependent_fields.message.monitor_field_value;
        $('form#webform-client-form-4310 #edit-submitted-subject').change(function(){
          if(jQuery.inArray($(this).val(), showOn) == -1){
            $('form#webform-client-form-4310 #edit-submit').show();
          }
          else {
            $('form#webform-client-form-4310 #edit-submit').hide();
          }

        });
      }

    },
    detach: function (context, settings) {

    }
  };

}(jQuery));;
/**
 * File: jquery.parss.js
 * Author: Brad Westness
 * Date: 02/07/2011
 * Purpose: Append the contents of an RSS feed
 * to a set of list elements.
 */
(function(jQuery){ 
	jQuery.fn.PaRSS = function(feed_url, item_count, date_format, show_descriptions, callback_function) {
    var ul_set = this,
    data = {
      feed_url: feed_url,
      item_count: item_count,
      date_format: date_format,
      show_descriptions: show_descriptions,
      callback_function: callback_function
    };
    
    /**
     * Initialize the Google Feed object and
     * load the actual feed
     */
    function initializeFeed() {
      var feed = new google.feeds.Feed(feed_url);
      if(data.item_count) {
        feed.setNumEntries(data.item_count);
      }
      feed.load(function(result) {
        if(!result.error){
          getItems(result.feed.entries);              
        }
      });
    }
    
    /**
     * Pull the content from the feed
     * items and add it to the ul
     */
    function getItems(entries){
      var list = "";
      jQuery.each(entries, function(i, entry) {
        var list_item = "<span class='parss-title'><a href='" + entry.link + "'>" + entry.title + "</a></span>";
        
        if(data.date_format && data.date_format.length > 0) {
          list_item += "<span class='parss-date'>" + getFormattedDate(entry.publishedDate, data.date_format) + "</span>";
        }
        
        switch (data.show_descriptions) {
          case "image":
            var img = getImageFromContent(entry.content);
            if(img) {
              list_item += "<span class='parss-image'>" + img + "</span>";
            }
            list_item += "<span class='parss-description'>" + entry.contentSnippet + "</span>";
            break;
          case "content":
            list_item += "<span class='parss-description'>" + entry.content + "</span>";
            break;
          case true: case "true":
            list_item += "<span class='parss-description'>" + entry.contentSnippet + "</span>";
            break;
          default:
            break;
        }
        
        //
        // Add the item to the list
        list += "<li>" + list_item + "</li>";         
      });
      
      //
      // Add the list to the page
      jQuery(ul_set).empty().append(list);     
      
      //
      // Perform callback function (if any)      
      if (typeof callback_function == 'function') {
        callback_function.call(this);
      }
    }
    
    /**
     * Format a date according to a supplied
     * format string using PHP date format
     * http://php.net/manual/en/function.date.php
     */
    function getFormattedDate(date, format) {
      var months = ["January","February","March","April","May","June","July","August","September","October","November","December"],
      days = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"],
      date = new Date(Date.parse(date)),
      formatted_date = "";
      
      for (var i = 0; i < format.length; i += 1) {
        switch(format.charAt(i)) {
          case 'd':
            // Day of the month, 2 digits with leading zeros
            formatted_date += prependZeros(date.getDate());
            break;
          case 'D':
            // A textual representatino of a day, three letters
            formatted_date += days[date.getDay()].substring(0,3);
            break;
          case 'j':
            // Day of the month without leading zeros
            formatted_date += date.getDate();          
            break;
          case 'l':
            // A full textual representation of the day of the week
            formatted_date += days[date.getDay()];
            break;
          case 'N':
            // Numeric representation of the day of the week (1 - 7)
            formatted_date += date.getDay() + 1;
            break;
          case 'S':
            // English ordian suffix for the day of the month, 2 characters (st, nd, rd)
            formatted_date += getDateSuffix(date.getDate());
            break;
          case 'w':
            // Numeric representation of the day of the week (0 - 6)
            formatted_date += date.getDay();
            break;
          case 'z':
            // The day of the year (starting from 0)
            // not implemented
            break;
          case 'W':
            // Week number of year, weeks starting on Monday
            // not implemented
            break;
          case 'F':
            // A full textural representation of a month, such as 'January' or 'March'
            formatted_date += months[date.getMonth()];
            break;
          case 'm':
            // Numeric representation of a month, with leading zeroes (01 - 12)
            formatted_date += prependZeros(date.getMonth() + 1);
            break;
          case 'M':
            // A short textural representation of a month, three letters ('Jan' - 'Dec')
            formatted_date += months[date.getMonth()].substring(0,3);
            break;
          case 'n':
            // Numeric representation of a month, without leading zeros (1 - 12)
            formatted_date += date.getMonth() + 1;
            break;
          case 't':
            // Number of days in the given month
            // Not implemented
            break;
          case 'L':
            // Whether it's a leap year
            // Not implemented
            break;
          case 'o':
          case 'Y':
            // A full numeric representation of a year, 4 digits
            formatted_date += date.getFullYear();
            break;
          case 'y':
            // A two-digit representation of a year
            formatted_date += date.getFullYear().toString().substring(-2);
            break;
          case 'a':
            // Lowercase Ante meridiem and Post meridiem
            formatted_date += (date.getHours() < 12) ? "am" : "pm";
            break;
          case 'A':
            // Uppercase Ante meridiem and Post meridiem
            formatted_date += (date.getHours() < 12) ? "AM" : "PM";
            break;
          case 'B':
            // Swatch internet time
            // not implemented
            break;
          case 'g':
            // 12-hour format of an hour without leading zeros (1 - 12)
            formatted_date += (date.getHours() > 12) ? date.getHours() - 12 : date.getHours();
            break;
          case 'G':
            // 24-hour format of an hour without leading zeros (1 - 24)
            formatted_date += date.getHours();
            break;
          case 'h':
            // 12-hour format of an hour with leading zeros (01 - 12)
            formatted_date += prependZeros((date.getHours() > 12) ? date.getHours() - 12 : date.getHours());
            break;
          case 'H':
            // 24-hour format of an hour with leading zeros (01 - 24)
            formatted_date += prependZeros(date.getHours());
            break;
          case 'i':
            // Minutes, with leading zeros (00 - 59)
            formatted_date += prependZeros(date.getMinutes());
            break;
          case 's':
            // Seconds, with leading zeros (00 - 59)
            formatted_date += prependZeros(date.getDate());
            break;
          case 'u':
            // Microseconds (654321)
            formatted_date += date.getMilliseconds();
            break;
          case 'e':
            // Timezone identifier ('UTC', 'GMT')
            // not implemented
            break;
          case 'O':
          case 'P':
            // Difference to Greenwich time (GMT) in hours (+0200)
            formatted_date += date.getTimezoneOffset();
            break;
          case 'T':
            // Timezone abbreviation ('EST', 'MDT')
            // not implemented
            break;
          case 'Z':
            // Timezone offset in seconds
            // not implemented
            break;
          case 'c':
            // Full UTC date
            formatted_date += date.toUTCString();
            break;
          case 'r':
            // Full date string
            formatted_date += date.toDateString();
            break;
          case 'U':
            // Seconds since the epoch
            formatted_date += date.valueOf();
            break;
          default:
            // Non-meaningful character, just append it
            formatted_date += format.charAt(i);
            break;
        }
      }
      
      return formatted_date;
    }
    
    /**
     * Determine the correct suffix
     * for a date of the month
     */
    function getDateSuffix(date) {
      var day = parseInt(date.toString().substring(date.toString().length-1));
      switch (day) {
        case 1:
          return "st";
          break;
        case 2:
          return "nd";
          break;
        case 3:
          return "rd";
          break;
        default:
          return "th";
          break;
      }
    }
     
    
    /**
     * Add a leading zero to single-digit numbers
     */
    function prependZeros(input) {
      var str = input.toString();
      if(str.length < 2) {
        str = "0" + str;
      }
      return str;
    }

    /**
     * Pull the first image from an feed item's content 
     * and return it as an HTML <img /> element
     */
    function getImageFromContent(content) {
      var img = content.match(/<img[^>+]*>/i);
      if(img) {
        var source = img[0].match(/src="[^"+]*"/i),
        alt = img[0].match(/alt="[^"+]*"/i);
        return "<img " + source + " " + alt + " />";
      }
      return false;
    }
    
    /**
     * Load the Google Feed API
     * and load the feed
     */
    jQuery.getScript("https://www.google.com/jsapi", function() {
      google.load("feeds", "1", {"callback": initializeFeed});      
    });    
  }
})(jQuery, this);;
(function ($) {

/**
 * Attaches sticky table headers.
 */
Drupal.behaviors.tableHeader = {
  attach: function (context, settings) {
    if (!$.support.positionFixed) {
      return;
    }

    $('table.sticky-enabled', context).once('tableheader', function () {
      $(this).data("drupal-tableheader", new Drupal.tableHeader(this));
    });
  }
};

/**
 * Constructor for the tableHeader object. Provides sticky table headers.
 *
 * @param table
 *   DOM object for the table to add a sticky header to.
 */
Drupal.tableHeader = function (table) {
  var self = this;

  this.originalTable = $(table);
  this.originalHeader = $(table).children('thead');
  this.originalHeaderCells = this.originalHeader.find('> tr > th');
  this.displayWeight = null;

  // React to columns change to avoid making checks in the scroll callback.
  this.originalTable.bind('columnschange', function (e, display) {
    // This will force header size to be calculated on scroll.
    self.widthCalculated = (self.displayWeight !== null && self.displayWeight === display);
    self.displayWeight = display;
  });

  // Clone the table header so it inherits original jQuery properties. Hide
  // the table to avoid a flash of the header clone upon page load.
  this.stickyTable = $('<table class="sticky-header"/>')
    .insertBefore(this.originalTable)
    .css({ position: 'fixed', top: '0px' });
  this.stickyHeader = this.originalHeader.clone(true)
    .hide()
    .appendTo(this.stickyTable);
  this.stickyHeaderCells = this.stickyHeader.find('> tr > th');

  this.originalTable.addClass('sticky-table');
  $(window)
    .bind('scroll.drupal-tableheader', $.proxy(this, 'eventhandlerRecalculateStickyHeader'))
    .bind('resize.drupal-tableheader', { calculateWidth: true }, $.proxy(this, 'eventhandlerRecalculateStickyHeader'))
    // Make sure the anchor being scrolled into view is not hidden beneath the
    // sticky table header. Adjust the scrollTop if it does.
    .bind('drupalDisplaceAnchor.drupal-tableheader', function () {
      window.scrollBy(0, -self.stickyTable.outerHeight());
    })
    // Make sure the element being focused is not hidden beneath the sticky
    // table header. Adjust the scrollTop if it does.
    .bind('drupalDisplaceFocus.drupal-tableheader', function (event) {
      if (self.stickyVisible && event.clientY < (self.stickyOffsetTop + self.stickyTable.outerHeight()) && event.$target.closest('sticky-header').length === 0) {
        window.scrollBy(0, -self.stickyTable.outerHeight());
      }
    })
    .triggerHandler('resize.drupal-tableheader');

  // We hid the header to avoid it showing up erroneously on page load;
  // we need to unhide it now so that it will show up when expected.
  this.stickyHeader.show();
};

/**
 * Event handler: recalculates position of the sticky table header.
 *
 * @param event
 *   Event being triggered.
 */
Drupal.tableHeader.prototype.eventhandlerRecalculateStickyHeader = function (event) {
  var self = this;
  var calculateWidth = event.data && event.data.calculateWidth;

  // Reset top position of sticky table headers to the current top offset.
  this.stickyOffsetTop = Drupal.settings.tableHeaderOffset ? eval(Drupal.settings.tableHeaderOffset + '()') : 0;
  this.stickyTable.css('top', this.stickyOffsetTop + 'px');

  // Save positioning data.
  var viewHeight = document.documentElement.scrollHeight || document.body.scrollHeight;
  if (calculateWidth || this.viewHeight !== viewHeight) {
    this.viewHeight = viewHeight;
    this.vPosition = this.originalTable.offset().top - 4 - this.stickyOffsetTop;
    this.hPosition = this.originalTable.offset().left;
    this.vLength = this.originalTable[0].clientHeight - 100;
    calculateWidth = true;
  }

  // Track horizontal positioning relative to the viewport and set visibility.
  var hScroll = document.documentElement.scrollLeft || document.body.scrollLeft;
  var vOffset = (document.documentElement.scrollTop || document.body.scrollTop) - this.vPosition;
  this.stickyVisible = vOffset > 0 && vOffset < this.vLength;
  this.stickyTable.css({ left: (-hScroll + this.hPosition) + 'px', visibility: this.stickyVisible ? 'visible' : 'hidden' });

  // Only perform expensive calculations if the sticky header is actually
  // visible or when forced.
  if (this.stickyVisible && (calculateWidth || !this.widthCalculated)) {
    this.widthCalculated = true;
    var $that = null;
    var $stickyCell = null;
    var display = null;
    var cellWidth = null;
    // Resize header and its cell widths.
    // Only apply width to visible table cells. This prevents the header from
    // displaying incorrectly when the sticky header is no longer visible.
    for (var i = 0, il = this.originalHeaderCells.length; i < il; i += 1) {
      $that = $(this.originalHeaderCells[i]);
      $stickyCell = this.stickyHeaderCells.eq($that.index());
      display = $that.css('display');
      if (display !== 'none') {
        cellWidth = $that.css('width');
        // Exception for IE7.
        if (cellWidth === 'auto') {
          cellWidth = $that[0].clientWidth + 'px';
        }
        $stickyCell.css({'width': cellWidth, 'display': display});
      }
      else {
        $stickyCell.css('display', 'none');
      }
    }
    this.stickyTable.css('width', this.originalTable.outerWidth());
  }
};

})(jQuery);
;
/**
 * @file
 *
 * Implement a modal form.
 *
 * @see modal.inc for documentation.
 *
 * This javascript relies on the CTools ajax responder.
 */

(function ($) {
  // Make sure our objects are defined.
  Drupal.CTools = Drupal.CTools || {};
  Drupal.CTools.Modal = Drupal.CTools.Modal || {};

  /**
   * Display the modal
   *
   * @todo -- document the settings.
   */
  Drupal.CTools.Modal.show = function(choice) {
    var opts = {};

    if (choice && typeof choice == 'string' && Drupal.settings[choice]) {
      // This notation guarantees we are actually copying it.
      $.extend(true, opts, Drupal.settings[choice]);
    }
    else if (choice) {
      $.extend(true, opts, choice);
    }

    var defaults = {
      modalTheme: 'CToolsModalDialog',
      throbberTheme: 'CToolsModalThrobber',
      animation: 'show',
      animationSpeed: 'fast',
      modalSize: {
        type: 'scale',
        width: .8,
        height: .8,
        addWidth: 0,
        addHeight: 0,
        // How much to remove from the inner content to make space for the
        // theming.
        contentRight: 25,
        contentBottom: 45
      },
      modalOptions: {
        opacity: .55,
        background: '#fff'
      }
    };

    var settings = {};
    $.extend(true, settings, defaults, Drupal.settings.CToolsModal, opts);

    if (Drupal.CTools.Modal.currentSettings && Drupal.CTools.Modal.currentSettings != settings) {
      Drupal.CTools.Modal.modal.remove();
      Drupal.CTools.Modal.modal = null;
    }

    Drupal.CTools.Modal.currentSettings = settings;

    var resize = function(e) {
      // When creating the modal, it actually exists only in a theoretical
      // place that is not in the DOM. But once the modal exists, it is in the
      // DOM so the context must be set appropriately.
      var context = e ? document : Drupal.CTools.Modal.modal;

      if (Drupal.CTools.Modal.currentSettings.modalSize.type == 'scale') {
        var width = $(window).width() * Drupal.CTools.Modal.currentSettings.modalSize.width;
        var height = $(window).height() * Drupal.CTools.Modal.currentSettings.modalSize.height;
      }
      else {
        var width = Drupal.CTools.Modal.currentSettings.modalSize.width;
        var height = Drupal.CTools.Modal.currentSettings.modalSize.height;
      }

      // Use the additionol pixels for creating the width and height.
      $('div.ctools-modal-content', context).css({
        'width': width + Drupal.CTools.Modal.currentSettings.modalSize.addWidth + 'px',
        'height': height + Drupal.CTools.Modal.currentSettings.modalSize.addHeight + 'px'
      });
      $('div.ctools-modal-content .modal-content', context).css({
        'width': (width - Drupal.CTools.Modal.currentSettings.modalSize.contentRight) + 'px',
        'height': (height - Drupal.CTools.Modal.currentSettings.modalSize.contentBottom) + 'px'
      });
    }

    if (!Drupal.CTools.Modal.modal) {
      Drupal.CTools.Modal.modal = $(Drupal.theme(settings.modalTheme));
      if (settings.modalSize.type == 'scale') {
        $(window).bind('resize', resize);
      }
    }

    resize();

    $('span.modal-title', Drupal.CTools.Modal.modal).html(Drupal.CTools.Modal.currentSettings.loadingText);
    Drupal.CTools.Modal.modalContent(Drupal.CTools.Modal.modal, settings.modalOptions, settings.animation, settings.animationSpeed);
    $('#modalContent .modal-content').html(Drupal.theme(settings.throbberTheme));
  };

  /**
   * Hide the modal
   */
  Drupal.CTools.Modal.dismiss = function() {
    if (Drupal.CTools.Modal.modal) {
      Drupal.CTools.Modal.unmodalContent(Drupal.CTools.Modal.modal);
    }
  };

  /**
   * Provide the HTML to create the modal dialog.
   */
  Drupal.theme.prototype.CToolsModalDialog = function () {
    var html = ''
    html += '  <div id="ctools-modal">'
    html += '    <div class="ctools-modal-content">' // panels-modal-content
    html += '      <div class="modal-header">';
    html += '        <a class="close" href="#">';
    html +=            Drupal.CTools.Modal.currentSettings.closeText + Drupal.CTools.Modal.currentSettings.closeImage;
    html += '        </a>';
    html += '        <span id="modal-title" class="modal-title">&nbsp;</span>';
    html += '      </div>';
    html += '      <div id="modal-content" class="modal-content">';
    html += '      </div>';
    html += '    </div>';
    html += '  </div>';

    return html;
  }

  /**
   * Provide the HTML to create the throbber.
   */
  Drupal.theme.prototype.CToolsModalThrobber = function () {
    var html = '';
    html += '  <div id="modal-throbber">';
    html += '    <div class="modal-throbber-wrapper">';
    html +=        Drupal.CTools.Modal.currentSettings.throbber;
    html += '    </div>';
    html += '  </div>';

    return html;
  };

  /**
   * Figure out what settings string to use to display a modal.
   */
  Drupal.CTools.Modal.getSettings = function (object) {
    var match = $(object).attr('class').match(/ctools-modal-(\S+)/);
    if (match) {
      return match[1];
    }
  }

  /**
   * Click function for modals that can be cached.
   */
  Drupal.CTools.Modal.clickAjaxCacheLink = function () {
    Drupal.CTools.Modal.show(Drupal.CTools.Modal.getSettings(this));
    return Drupal.CTools.AJAX.clickAJAXCacheLink.apply(this);
  };

  /**
   * Handler to prepare the modal for the response
   */
  Drupal.CTools.Modal.clickAjaxLink = function () {
    Drupal.CTools.Modal.show(Drupal.CTools.Modal.getSettings(this));
    return false;
  };

  /**
   * Submit responder to do an AJAX submit on all modal forms.
   */
  Drupal.CTools.Modal.submitAjaxForm = function(e) {
    var $form = $(this);
    var url = $form.attr('action');

    setTimeout(function() { Drupal.CTools.AJAX.ajaxSubmit($form, url); }, 1);
    return false;
  }

  /**
   * Bind links that will open modals to the appropriate function.
   */
  Drupal.behaviors.ZZCToolsModal = {
    attach: function(context) {
      // Bind links
      // Note that doing so in this order means that the two classes can be
      // used together safely.
      /*
       * @todo remimplement the warm caching feature
       $('a.ctools-use-modal-cache', context).once('ctools-use-modal', function() {
         $(this).click(Drupal.CTools.Modal.clickAjaxCacheLink);
         Drupal.CTools.AJAX.warmCache.apply(this);
       });
        */

      $('area.ctools-use-modal, a.ctools-use-modal', context).once('ctools-use-modal', function() {
        var $this = $(this);
        $this.click(Drupal.CTools.Modal.clickAjaxLink);
        // Create a drupal ajax object
        var element_settings = {};
        if ($this.attr('href')) {
          element_settings.url = $this.attr('href');
          element_settings.event = 'click';
          element_settings.progress = { type: 'throbber' };
        }
        var base = $this.attr('href');
        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
      });

      // Bind buttons
      $('input.ctools-use-modal, button.ctools-use-modal', context).once('ctools-use-modal', function() {
        var $this = $(this);
        $this.click(Drupal.CTools.Modal.clickAjaxLink);
        var button = this;
        var element_settings = {};

        // AJAX submits specified in this manner automatically submit to the
        // normal form action.
        element_settings.url = Drupal.CTools.Modal.findURL(this);
        element_settings.event = 'click';

        var base = $this.attr('id');
        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);

        // Make sure changes to settings are reflected in the URL.
        $('.' + $(button).attr('id') + '-url').change(function() {
          Drupal.ajax[base].options.url = Drupal.CTools.Modal.findURL(button);
        });
      });

      // Bind our custom event to the form submit
      $('#modal-content form', context).once('ctools-use-modal', function() {
        var $this = $(this);
        var element_settings = {};

        element_settings.url = $this.attr('action');
        element_settings.event = 'submit';
        element_settings.progress = { 'type': 'throbber' }
        var base = $this.attr('id');

        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
        Drupal.ajax[base].form = $this;

        $('input[type=submit], button', this).click(function(event) {
          Drupal.ajax[base].element = this;
          this.form.clk = this;
          // An empty event means we were triggered via .click() and
          // in jquery 1.4 this won't trigger a submit.
          if (event.bubbles == undefined) {
            $(this.form).trigger('submit');
            return false;
          }
        });
      });

      // Bind a click handler to allow elements with the 'ctools-close-modal'
      // class to close the modal.
      $('.ctools-close-modal', context).once('ctools-close-modal')
        .click(function() {
          Drupal.CTools.Modal.dismiss();
          return false;
        });
    }
  };

  // The following are implementations of AJAX responder commands.

  /**
   * AJAX responder command to place HTML within the modal.
   */
  Drupal.CTools.Modal.modal_display = function(ajax, response, status) {
    if ($('#modalContent').length == 0) {
      Drupal.CTools.Modal.show(Drupal.CTools.Modal.getSettings(ajax.element));
    }
    $('#modal-title').html(response.title);
    // Simulate an actual page load by scrolling to the top after adding the
    // content. This is helpful for allowing users to see error messages at the
    // top of a form, etc.
    $('#modal-content').html(response.output).scrollTop(0);
    Drupal.attachBehaviors();
  }

  /**
   * AJAX responder command to dismiss the modal.
   */
  Drupal.CTools.Modal.modal_dismiss = function(command) {
    Drupal.CTools.Modal.dismiss();
    $('link.ctools-temporary-css').remove();
  }

  /**
   * Display loading
   */
  //Drupal.CTools.AJAX.commands.modal_loading = function(command) {
  Drupal.CTools.Modal.modal_loading = function(command) {
    Drupal.CTools.Modal.modal_display({
      output: Drupal.theme(Drupal.CTools.Modal.currentSettings.throbberTheme),
      title: Drupal.CTools.Modal.currentSettings.loadingText
    });
  }

  /**
   * Find a URL for an AJAX button.
   *
   * The URL for this gadget will be composed of the values of items by
   * taking the ID of this item and adding -url and looking for that
   * class. They need to be in the form in order since we will
   * concat them all together using '/'.
   */
  Drupal.CTools.Modal.findURL = function(item) {
    var url = '';
    var url_class = '.' + $(item).attr('id') + '-url';
    $(url_class).each(
      function() {
        var $this = $(this);
        if (url && $this.val()) {
          url += '/';
        }
        url += $this.val();
      });
    return url;
  };


  /**
   * modalContent
   * @param content string to display in the content box
   * @param css obj of css attributes
   * @param animation (fadeIn, slideDown, show)
   * @param speed (valid animation speeds slow, medium, fast or # in ms)
   */
  Drupal.CTools.Modal.modalContent = function(content, css, animation, speed) {
    // If our animation isn't set, make it just show/pop
    if (!animation) {
      animation = 'show';
    }
    else {
      // If our animation isn't "fadeIn" or "slideDown" then it always is show
      if (animation != 'fadeIn' && animation != 'slideDown') {
        animation = 'show';
      }
    }

    if (!speed) {
      speed = 'fast';
    }

    // Build our base attributes and allow them to be overriden
    css = jQuery.extend({
      position: 'absolute',
      left: '0px',
      margin: '0px',
      background: '#000',
      opacity: '.55'
    }, css);

    // Add opacity handling for IE.
    css.filter = 'alpha(opacity=' + (100 * css.opacity) + ')';
    content.hide();

    // if we already ahve a modalContent, remove it
    if ( $('#modalBackdrop')) $('#modalBackdrop').remove();
    if ( $('#modalContent')) $('#modalContent').remove();

    // position code lifted from http://www.quirksmode.org/viewport/compatibility.html
    if (self.pageYOffset) { // all except Explorer
    var wt = self.pageYOffset;
    } else if (document.documentElement && document.documentElement.scrollTop) { // Explorer 6 Strict
      var wt = document.documentElement.scrollTop;
    } else if (document.body) { // all other Explorers
      var wt = document.body.scrollTop;
    }

    // Get our dimensions

    // Get the docHeight and (ugly hack) add 50 pixels to make sure we dont have a *visible* border below our div
    var docHeight = $(document).height() + 50;
    var docWidth = $(document).width();
    var winHeight = $(window).height();
    var winWidth = $(window).width();
    if( docHeight < winHeight ) docHeight = winHeight;

    // Create our divs
    $('body').append('<div id="modalBackdrop" style="z-index: 1000; display: none;"></div><div id="modalContent" style="z-index: 1001; position: absolute;">' + $(content).html() + '</div>');

    // Keyboard and focus event handler ensures focus stays on modal elements only
    modalEventHandler = function( event ) {
      target = null;
      if ( event ) { //Mozilla
        target = event.target;
      } else { //IE
        event = window.event;
        target = event.srcElement;
      }

      var parents = $(target).parents().get();
      for (var i = 0; i < parents.length; ++i) {
        var position = $(parents[i]).css('position');
        if (position == 'absolute' || position == 'fixed') {
          return true;
        }
      }
      if( $(target).filter('*:visible').parents('#modalContent').size()) {
        // allow the event only if target is a visible child node of #modalContent
        return true;
      }
      if ( $('#modalContent')) $('#modalContent').get(0).focus();
      return false;
    };
    $('body').bind( 'focus', modalEventHandler );
    $('body').bind( 'keypress', modalEventHandler );

    // Create our content div, get the dimensions, and hide it
    var modalContent = $('#modalContent').css('top','-1000px');
    var mdcTop = wt + ( winHeight / 2 ) - (  modalContent.outerHeight() / 2);
    var mdcLeft = ( winWidth / 2 ) - ( modalContent.outerWidth() / 2);
    $('#modalBackdrop').css(css).css('top', 0).css('height', docHeight + 'px').css('width', docWidth + 'px').show();
    modalContent.css({top: mdcTop + 'px', left: mdcLeft + 'px'}).hide()[animation](speed);

    // Bind a click for closing the modalContent
    modalContentClose = function(){close(); return false;};
    $('.close').bind('click', modalContentClose);

    // Bind a keypress on escape for closing the modalContent
    modalEventEscapeCloseHandler = function(event) {
      if (event.keyCode == 27) {
        close();
        return false;
      }
    };

    $(document).bind('keydown', modalEventEscapeCloseHandler);

    // Close the open modal content and backdrop
    function close() {
      // Unbind the events
      $(window).unbind('resize',  modalContentResize);
      $('body').unbind( 'focus', modalEventHandler);
      $('body').unbind( 'keypress', modalEventHandler );
      $('.close').unbind('click', modalContentClose);
      $('body').unbind('keypress', modalEventEscapeCloseHandler);
      $(document).trigger('CToolsDetachBehaviors', $('#modalContent'));

      // Set our animation parameters and use them
      if ( animation == 'fadeIn' ) animation = 'fadeOut';
      if ( animation == 'slideDown' ) animation = 'slideUp';
      if ( animation == 'show' ) animation = 'hide';

      // Close the content
      modalContent.hide()[animation](speed);

      // Remove the content
      $('#modalContent').remove();
      $('#modalBackdrop').remove();
    };

    // Move and resize the modalBackdrop and modalContent on resize of the window
     modalContentResize = function(){
      // Get our heights
      var docHeight = $(document).height();
      var docWidth = $(document).width();
      var winHeight = $(window).height();
      var winWidth = $(window).width();
      if( docHeight < winHeight ) docHeight = winHeight;

      // Get where we should move content to
      var modalContent = $('#modalContent');
      var mdcTop = ( winHeight / 2 ) - (  modalContent.outerHeight() / 2);
      var mdcLeft = ( winWidth / 2 ) - ( modalContent.outerWidth() / 2);

      // Apply the changes
      $('#modalBackdrop').css('height', docHeight + 'px').css('width', docWidth + 'px').show();
      modalContent.css('top', mdcTop + 'px').css('left', mdcLeft + 'px').show();
    };
    $(window).bind('resize', modalContentResize);

    $('#modalContent').focus();
  };

  /**
   * unmodalContent
   * @param content (The jQuery object to remove)
   * @param animation (fadeOut, slideUp, show)
   * @param speed (valid animation speeds slow, medium, fast or # in ms)
   */
  Drupal.CTools.Modal.unmodalContent = function(content, animation, speed)
  {
    // If our animation isn't set, make it just show/pop
    if (!animation) { var animation = 'show'; } else {
      // If our animation isn't "fade" then it always is show
      if (( animation != 'fadeOut' ) && ( animation != 'slideUp')) animation = 'show';
    }
    // Set a speed if we dont have one
    if ( !speed ) var speed = 'fast';

    // Unbind the events we bound
    $(window).unbind('resize', modalContentResize);
    $('body').unbind('focus', modalEventHandler);
    $('body').unbind('keypress', modalEventHandler);
    $('.close').unbind('click', modalContentClose);
    $(document).trigger('CToolsDetachBehaviors', $('#modalContent'));

    // jQuery magic loop through the instances and run the animations or removal.
    content.each(function(){
      if ( animation == 'fade' ) {
        $('#modalContent').fadeOut(speed, function() {
          $('#modalBackdrop').fadeOut(speed, function() {
            $(this).remove();
          });
          $(this).remove();
        });
      } else {
        if ( animation == 'slide' ) {
          $('#modalContent').slideUp(speed,function() {
            $('#modalBackdrop').slideUp(speed, function() {
              $(this).remove();
            });
            $(this).remove();
          });
        } else {
          $('#modalContent').remove();
          $('#modalBackdrop').remove();
        }
      }
    });
  };

$(function() {
  Drupal.ajax.prototype.commands.modal_display = Drupal.CTools.Modal.modal_display;
  Drupal.ajax.prototype.commands.modal_dismiss = Drupal.CTools.Modal.modal_dismiss;
});

})(jQuery);
;
/**
 * @file
 * Implement basic methods required by all of panels.
 */

(function ($) {
  Drupal.Panels = Drupal.Panels || {};

  Drupal.Panels.changed = function(item) {
    if (!item.is('.changed')) {
      item.addClass('changed');
      item.find('div.grabber span.text').append(' <span class="star">*</span> ');
    }
  };

  Drupal.Panels.restripeTable = function(table) {
    // :even and :odd are reversed because jquery counts from 0 and
    // we count from 1, so we're out of sync.
    $('tbody tr:not(:hidden)', $(table))
      .removeClass('even')
      .removeClass('odd')
      .filter(':even')
        .addClass('odd')
      .end()
      .filter(':odd')
        .addClass('even');
  };
})(jQuery);
;
/**
 * @file display_editor.js
 *
 * Contains the javascript for the Panels display editor.
 */

(function ($) {

// randomly lock a pane.
// @debug only
Drupal.settings.Panels = Drupal.settings.Panels || {};


/** Delete pane button **/
Drupal.Panels.bindClickDelete = function(context) {
  $('a.pane-delete:not(.pane-delete-processed)', context)
    .addClass('pane-delete-processed')
    .click(function() {
    if (confirm('Remove this pane?')) {
      var id = '#' + $(this).attr('id').replace('pane-delete-', '');
      $(id).remove();
      Drupal.Panels.Draggable.savePositions();
    }
    return false;
  });
};

Drupal.Panels.bindPortlet = function() {
  var handle = $(this).find('.panel-pane-collapsible > div.pane-title');
  var content = $(this).find('.panel-pane-collapsible > div.pane-content');
  if (content.length) {
    var toggle = $('<span class="toggle toggle-collapsed"></span>');
    handle.before(toggle);
    toggle.click(function() {
      content.slideToggle(20);
      toggle.toggleClass('toggle-collapsed');
    });
    handle.click(function() {
      content.slideToggle(20);
      toggle.toggleClass('toggle-collapsed');
    });
    content.hide();
  }
};

Drupal.Panels.Draggable = {
  // The draggable object
  object: null,

  // Where objects can be dropped
  dropzones: [],
  current_dropzone: null,

  // positions within dropzones where an object can be plazed
  landing_pads: [],
  current_pad: null,

  // Where the object is
  mouseOffset: { x: 0, y: 0 },
  windowOffset: { x: 0, y: 0 },
  offsetDivHeight: 0,

  // original settings to be restored
  original: {},
  // a placeholder so that if the object is let go but not over a drop zone,
  // it can be put back where it belongs
  placeholder: {},

  hoverclass: 'hoverclass',
  helperclass: 'helperclass',
  accept: 'div.panel-region',
  handle: 'div.grabber',
  draggable: 'div.panel-portlet',
  main: 'div#panels-dnd-main',

  // part of the id to remove to get just the number
  draggableId: 'panel-pane-',

  // part of the id to remove to get just the number
  regionId: 'panel-region-',

  // What to add to the front of a the id to get the form id for a panel
  formId: 'input#edit-',

  maxWidth: 250,

  unsetDropZone: function() {
    $(this.current_dropzone.obj).removeClass(this.hoverclass);
    this.current_dropzone = null;
    for (var i in this.landing_pads) {
      $(this.landing_pads[i].obj).remove();
    }
    this.landing_pads = [];
    this.current_pad = null;
  },

  createLandingPad: function(where, append) {
    var obj = $('<div class="' + this.helperclass +'" id="' +
      $(where).attr('id') + '-dropzone">&nbsp;</div>');
    if (append) {
      $(where).append(obj);
    }
    else {
      $(where).before(obj);
    }
    var offset = $(obj).offset();

    $(obj).css({
      display: 'none'
    });
    this.landing_pads.push({
      centerX: offset.left + ($(obj).innerWidth() / 2),
      centerY: offset.top + ($(obj).innerHeight() / 2),
      obj: obj
    });
    return obj;
  },

  calculateDropZones: function(event, dropzone) {
    var draggable = Drupal.Panels.Draggable;
    var dropzones = [];
    $(this.accept).each(function() {
      var offset = $(this).offset();
      offset.obj = this;
      offset.region = this.id.replace(draggable.regionId, '');
      offset.width = $(this).outerWidth();
      offset.height = $(this).outerHeight();
      dropzones.push(offset);
    });
    this.dropzones = dropzones;
  },

  reCalculateDropZones: function() {
    for (var i in this.dropzones) {
      var offset = $(this.dropzones[i].obj).offset();
      offset.width = $(this.dropzones[i].obj).outerWidth();
      offset.height = $(this.dropzones[i].obj).outerHeight();
      $.extend(this.dropzones[i], offset);
    }
  },

  changeDropZone: function(new_dropzone) {
    // Unset our old dropzone.
    if (this.current_dropzone) {
      this.unsetDropZone();
    }

    // Set up our new dropzone.
    this.current_dropzone = new_dropzone;
    $(this.current_dropzone.obj).addClass(this.hoverclass);
    // add a landing pad
    this.createLandingPad(this.current_dropzone.obj, true);

    var that = this;
    // Create a landing pad before each existing portlet.
    $(this.current_dropzone.obj).find(this.draggable).each(function() {
      if (that.object.id != this.id) {
        that.createLandingPad(this, false);
      }
    });
  },

  findLandingPad: function(x, y) {
    var shortest_distance = null;
    var nearest_pad = null;
    // find the nearest pad.
    for (var i in this.landing_pads) {
      // This isn't the real distance, this is the square of the
      // distance -- no point in spending processing time on
      // sqrt.
      var dstx = Math.abs(x - this.landing_pads[i].centerX);
      var dsty = Math.abs(y - this.landing_pads[i].centerY);
      var distance =  (dstx * dstx) + (dsty * dsty);
      if (shortest_distance == null || distance < shortest_distance) {
        shortest_distance = distance;
        nearest_pad = this.landing_pads[i];
      }
    }
    if (nearest_pad != this.current_pad) {
      if (this.current_pad) {
        $(this.current_pad.obj).hide();
      }
      this.current_pad = nearest_pad;
      $(nearest_pad.obj).show();
    }
  },

  findDropZone: function(x, y) {
    // Go through our dropzones and see if we're over one.
    var new_dropzone = null;
    for (var i in this.dropzones) {
//      console.log('x:' + x + ' left:' + this.dropzones[i].left + ' right: ' + this.dropzones[i].left + this.dropzones[i].width);
      if (this.dropzones[i].left < x &&
        x < this.dropzones[i].left + this.dropzones[i].width &&
        this.dropzones[i].top < y &&
        y < this.dropzones[i].top + this.dropzones[i].height) {
          new_dropzone = this.dropzones[i];
          break;
      }
    }
    // If we're over one, see if it's different.
    if (new_dropzone && (!this.regionLock || this.regionLockRegions[new_dropzone.region])) {
      var changed = false;
      if (!this.current_dropzone || new_dropzone.obj.id != this.current_dropzone.obj.id) {
        this.changeDropZone(new_dropzone);
        changed = true;
      }
      this.findLandingPad(x, y);
      if (changed)  {
        // recalculate the size of our drop zones due to the fact that we're drawing landing pads.
        this.reCalculateDropZones();
      }
    }
    // If we're not over one, be sure to unhilite one if we were just
    // over it.
    else if (this.current_dropzone) {
      this.unsetDropZone();
    }
  },

  /** save button clicked, or pane deleted **/
  savePositions: function() {
    var draggable = Drupal.Panels.Draggable;
    $(draggable.accept).each(function() {
      var val = '';
      $(this).find(draggable.draggable).each(function() {
        if (val) {
          val += ',';
        }

        val += this.id.replace(draggable.draggableId, '');
      });
      var region = this.id.replace(draggable.regionId, '');
      $('input[name="panel[pane][' +  region + ']"]').val(val);
    });
    return false;
  }
};

Drupal.Panels.DraggableHandler = function() {
  $(this).addClass('panel-draggable');
  var draggable = Drupal.Panels.Draggable;
  var scrollBuffer = 10;
  var scrollDistance = 10;
  var scrollTimer = 30;

  getMouseOffset = function(docPos, mousePos, windowPos) {
    return { x: mousePos.x - docPos.x + windowPos.x, y: mousePos.y - docPos.y + windowPos.y};
  };

  getMousePos = function(ev) {
    ev = ev || window.event;

    if (ev.pageX || ev.pageY) {
      return { x:ev.pageX, y:ev.pageY };
    }
    return {
      x:ev.clientX + document.body.scrollLeft - document.body.clientLeft,
      y:ev.clientY + document.body.scrollTop  - document.body.clientTop
    };
  };

  getPosition = function(e) {
    /*
    if (document.defaultView && document.defaultView.getComputedStyle) {
      var css = document.defaultView.getComputedStyle(e, null);
      return {
        x: parseInt(css.getPropertyValue('left')),
        y: parseInt(css.getPropertyValue('top'))
      };
    }
    */
    var left = 0;
    var top  = 0;

    while (e.offsetParent) {
      left += e.offsetLeft;
      top  += e.offsetTop;
      e     = e.offsetParent;
    }

    left += e.offsetLeft;
    top  += e.offsetTop;

    return { x:left, y:top };
  };

  mouseUp = function(e) {
    clearTimeout(draggable.timeoutId);
    draggable.dropzones = [];

    if (draggable.current_pad) {
      // Drop the object where we're hovering
      $(draggable.object).insertAfter($(draggable.current_pad.obj));
      Drupal.Panels.changed($(draggable.object));
    }
    else {
      // or put it back where it came from
      $(draggable.object).insertAfter(draggable.placeholder);
    }
    // remove the placeholder
    draggable.placeholder.remove();

    // restore original settings.
    $(draggable.object).css(draggable.original);
    if (draggable.current_dropzone) {
      draggable.unsetDropZone();
    }

    $(document).unbind('mouseup').unbind('mousemove');
    draggable.savePositions();
  };

  mouseMove = function(e) {
    draggable.mousePos = getMousePos(e);

    draggable.findDropZone(draggable.mousePos.x, draggable.mousePos.y);

    var windowMoved = parseInt(draggable.offsetDivHeight - $(draggable.main).innerHeight());

    draggable.object.style.top = draggable.mousePos.y - draggable.mouseOffset.y + windowMoved + 'px';
    draggable.object.style.left = draggable.mousePos.x - draggable.mouseOffset.x  + 'px';
    $(draggable.object).toggleClass('moving');
  };

  mouseDown = function(e) {
    // If we mouse-downed over something clickable, don't drag!
    if (e.target.nodeName == 'A' || e.target.nodeName == 'INPUT' || e.target.parentNode.nodeName == 'A' || e.target.nodeName.nodeName == 'INPUT') {
      return;
    }

    draggable.object = $(this).parent(draggable.draggable).get(0);
    draggable.paneId = draggable.object.id.replace(draggable.draggableId, '');

    // create a placeholder so we can put this object back if dropped in an invalid location.
    draggable.placeholder = $('<div class="draggable-placeholder-object" style="display:none"></div>"');
    $(draggable.object).after(draggable.placeholder);

    // Store original CSS so we can put it back.
    draggable.original = {
      position: $(draggable.object).css('position'),
      width: 'auto',
      left: $(draggable.object).css('left'),
      top: $(draggable.object).css('top'),
      'z-index': $(draggable.object).css('z-index'),
      'margin-bottom': $(draggable.object).css('margin-bottom'),
      'margin-top': $(draggable.object).css('margin-top'),
      'margin-left': $(draggable.object).css('margin-left'),
      'margin-right': $(draggable.object).css('margin-right'),
      'padding-bottom': $(draggable.object).css('padding-bottom'),
      'padding-top': $(draggable.object).css('padding-top'),
      'padding-left': $(draggable.object).css('padding-left'),
      'padding-right': $(draggable.object).css('padding-right')
    };

    draggable.mousePos = getMousePos(e);
    var originalPos = $(draggable.object).offset();
    var width = Math.min($(draggable.object).innerWidth(), draggable.maxWidth);

    draggable.offsetDivHeight = $(draggable.main).innerHeight();
    draggable.findDropZone(draggable.mousePos.x, draggable.mousePos.y);

    // Make copies of these because in FF3, they actually change when we
    // move the item, whereas they did not in FF2.

    if (e.layerX || e.layerY) {
      var layerX = e.layerX;
      var layerY = e.layerY;
    }
    else if (e.originalEvent && e.originalEvent.layerX) {
      var layerX = e.originalEvent.layerX;
      var layerY = e.originalEvent.layerY;
    }

    // Make the draggable relative, get it out of the way and make it
    // invisible.
    $(draggable.object).css({
      position: 'relative',
      'z-index': 100,
      width: width + 'px',
      'margin-bottom': (-1 * parseInt($(draggable.object).outerHeight())) + 'px',
      'margin-top': 0,
      'margin-left': 0,
      'margin-right': (-1 * parseInt($(draggable.object).outerWidth())) + 'px',
      'padding-bottom': 0,
      'padding-top': 0,
      'padding-left': 0,
      'padding-right': 0,
      'left': 0,
      'top': 0
    })
      .insertAfter($(draggable.main));
    var newPos = $(draggable.object).offset();

    var windowOffset = { left: originalPos.left - newPos.left, top: originalPos.top - newPos.top }

    // if they grabbed outside the area where we make the draggable smaller, move it
    // closer to the cursor.
    if (layerX != 'undefined' && layerX > width) {
      windowOffset.left += layerX - 10;
    }
    else if (layerX != 'undefined' && e.offsetX > width) {
      windowOffset.left += e.offsetX - 10;
    }

    // This is stored so we can move with it.
    draggable.mouseOffset = { x: draggable.mousePos.x - windowOffset.left, y: draggable.mousePos.y - windowOffset.top};
    draggable.offsetDivHeight = $(draggable.main).innerHeight();

    draggable.object.style.top = windowOffset.top + 'px';
    draggable.object.style.left = windowOffset.left + 'px';
    $(document).unbind('mouseup').unbind('mousemove').mouseup(mouseUp).mousemove(mouseMove);

    draggable.calculateDropZones(draggable.mousePos, e);
    draggable.timeoutId = setTimeout('timer()', scrollTimer);

    // If locking to a particular set of regions, set that:
    if (Drupal.settings.Panels && Drupal.settings.Panels.RegionLock && Drupal.settings.Panels.RegionLock[draggable.paneId]) {
      draggable.regionLock = true;
      draggable.regionLockRegions = Drupal.settings.Panels.RegionLock[draggable.paneId];
    }
    else {
      draggable.regionLock = false;
      draggable.regionLockRegions = null;
    }

    return false;
  };

  timer = function() {
    if (!draggable.timeCount) {
      draggable.timeCount = 0;
    }
    draggable.timeCount = draggable.timeCount + 1;
    var left = $(window).scrollLeft();
    var right = left + $(window).width();
    var top = $(window).scrollTop();
    var bottom = top + $(window).height();

    if (draggable.mousePos.x < left + scrollBuffer && left > 0) {
      window.scrollTo(left - scrollDistance, top);
      draggable.mousePos.x -= scrollDistance;
      draggable.object.style.top = draggable.mousePos.y - draggable.mouseOffset.y + 'px';
    }
    else if (draggable.mousePos.x > right - scrollBuffer) {
      window.scrollTo(left + scrollDistance, top);
      draggable.mousePos.x += scrollDistance;
      draggable.object.style.top = draggable.mousePos.y - draggable.mouseOffset.y + 'px';
    }
    else if (draggable.mousePos.y < top + scrollBuffer && top > 0) {
      window.scrollTo(left, top - scrollDistance);
      draggable.mousePos.y -= scrollDistance;
      draggable.object.style.top = draggable.mousePos.y - draggable.mouseOffset.y + 'px';
    }
    else if (draggable.mousePos.y > bottom - scrollBuffer) {
      window.scrollTo(left, top + scrollDistance);
      draggable.mousePos.y += scrollDistance;
      draggable.object.style.top = draggable.mousePos.y - draggable.mouseOffset.y + 'px';
    }

    draggable.timeoutId = setTimeout('timer()', scrollTimer);
  }

  $(this).mousedown(mouseDown);
};

$.fn.extend({
  panelsDraggable: Drupal.Panels.DraggableHandler
});

/**
 * Implement Drupal behavior for autoattach
 */
Drupal.behaviors.PanelsDisplayEditor = {
  attach: function(context) {
    // Show javascript only items.
    $('span#panels-js-only').css('display', 'inline');

    $('#panels-dnd-main div.panel-pane:not(.panel-portlet)')
      .addClass('panel-portlet')
      .each(Drupal.Panels.bindPortlet);

    // The above doesn't work if context IS the pane, so do this to catch that.
    if ($(context).hasClass('panel-pane') && !$(context).hasClass('panel-portlet')) {
      $(context)
        .addClass('panel-portlet')
        .each(Drupal.Panels.bindPortlet);
    }

    // Make draggables and make sure their positions are saved.
    $(context).find('div.grabber:not(.panel-draggable)').panelsDraggable();
    Drupal.Panels.Draggable.savePositions();

    // Bind buttons.
    $('input#panels-hide-all', context).click(Drupal.Panels.clickHideAll);
    $('input#panels-show-all', context).click(Drupal.Panels.clickShowAll);

    Drupal.Panels.bindClickDelete(context);

    $('#panels-live-preview-button:not(.panels-preview-processed)')
      .addClass('panels-preview-processed')
      .click(function () {
        if (!$('#panels-preview').size()) {
          $('#panels-dnd-main').parents('form').after('<div id="panels-preview" class="clearfix"></div>');
        }
        var html = '';
        html += '  <div id="modal-throbber">';
        html += '    <div class="modal-throbber-wrapper">';
        html +=        Drupal.settings.CToolsModal.throbber;
        html += '    </div>';
        html += '  </div>';

        $('#panels-preview').html(html);
      });

    var setTitleClass = function () {
      if ($('#edit-display-title-hide-title').val() == 2) {
        $('#panels-dnd-main').removeClass('panels-set-title-hide');
      }
      else {
        $('#panels-dnd-main').addClass('panels-set-title-hide');
      }
    }

    // The panes have an option to set the display title, but only if
    // a select is set to the proper value. This sets a class on the
    // main edit div so that the option to set the display title
    // is hidden if that is not selected, and visible if it is.
    $('#edit-display-title-hide-title:not(.panels-title-processed)')
      .addClass('panels-title-processed')
      .change(setTitleClass);

    setTitleClass();
  }
}

$(function() {
  /**
   * AJAX responder command to render the preview.
   */
  Drupal.ajax.prototype.commands.panel_preview = function(ajax, command, status) {
    $('#panels-preview').html(command.output);
  }
});

})(jQuery);
;
