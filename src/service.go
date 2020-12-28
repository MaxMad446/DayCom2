package main

// Auto-generated | 2026-05-14T18:12:08.213609
import "fmt"

func Process_289() int {
    base := 180
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
