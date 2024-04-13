package main

// Auto-generated | 2026-05-14T18:25:19.726609
import "fmt"

func Process_354() int {
    base := 28
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
