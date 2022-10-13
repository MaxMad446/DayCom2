package main

// Auto-generated | 2026-05-14T06:22:03.784667
import "fmt"

func Process_323() int {
    base := 411
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
