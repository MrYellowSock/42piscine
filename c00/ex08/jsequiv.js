function recursive(to_display, current, stop, depth) {
	for (var i = current; i <= stop; i++) {
		let clone = [...to_display, i]
		if (clone.length == depth) {
			process.stdout.write(clone.join("") + ", ");
		}
		else {
			recursive(clone, i + 1, stop, depth);
		}
	}
}

recursive([], 0, 9, 2)
