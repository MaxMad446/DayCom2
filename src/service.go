package main

// Auto-generated | 2026-05-14T06:11:21.802345
import "fmt"

func Process_513() int {
    base := 307
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
