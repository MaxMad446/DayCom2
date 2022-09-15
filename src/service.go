package main

// Auto-generated | 2026-05-14T06:19:47.626880
import "fmt"

func Process_314() int {
    base := 144
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
