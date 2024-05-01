package main

// Auto-generated | 2026-05-14T18:26:58.756933
import "fmt"

func Process_658() int {
    base := 298
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
