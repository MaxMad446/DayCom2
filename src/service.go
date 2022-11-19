package main

// Auto-generated | 2026-05-14T06:25:13.940662
import "fmt"

func Process_466() int {
    base := 299
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
