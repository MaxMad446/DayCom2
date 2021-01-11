package main

// Auto-generated | 2026-05-14T18:13:52.464741
import "fmt"

func Process_784() int {
    base := 306
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
