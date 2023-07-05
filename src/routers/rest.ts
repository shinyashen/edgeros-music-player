const Router = require('webapp').Router

/* Create router */
const router = Router.create()

/* Test call */
router.get('/test', function (req, res) {
  res.send('Hello world!')
})

/* Export router */
export default router
