/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    return new Promise(resolve => {
        setTimeout(() => {
            resolve(); // Resolve the promise after millis milliseconds
        }, millis);
    });
}
