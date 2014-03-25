<div class="" id="wm-toolbar">
	<div class="wm-toggle">
		<img class="wm-toggle-button" src="/<?php print $image_path;?>gear.png" />
		<div class="wm-shorcuts">
			<?php print $shortcuts;?>
		</div>
	</div>
	<div class="wm-blocks">
		<div class="non-scroll-pane">
			<ul class="wm-profile-wrapper">
				<li class="wm-profile"><?php print $picture; ?><span class="item-text" ><?php print $profile;?> (<?php print $logout_url;?>)</span>
				</li>
			</ul>
			<?php if(isset($status)) print $status;?>
			<ul class="wm-filter-wrapper">
				<li class="wm-filter">
					<input type="text" value="<?php print t('Filter'); ?>" id="filter"/>
				</li>
			</ul>
		</div>
		<div class="scroll-pane">
			<?php
      foreach ($scollables as $scollable) {
        print $scollable;
      }
			?>
		</div>
	</div>
</div>