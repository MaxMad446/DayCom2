package main

// Auto-generated | 2026-05-14T06:23:00.735544
import "fmt"

func Process_850() int {
    base := 399
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
