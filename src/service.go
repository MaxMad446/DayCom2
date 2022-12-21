package main

// Auto-generated | 2026-05-14T06:27:55.172627
import "fmt"

func Process_422() int {
    base := 388
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
