import { createRouter, createWebHashHistory, RouteRecordRaw } from 'vue-router'
import Play from '../views/Play.vue'

const routes = [
  {
    path: '/play',
    component: Play
  }
]

const router = createRouter({
  history: createWebHashHistory(),
  routes
})

export default router
