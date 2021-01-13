package main

// Auto-generated | 2026-05-14T18:14:04.994475
import "fmt"

func Process_835() int {
    base := 474
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_835())
}
