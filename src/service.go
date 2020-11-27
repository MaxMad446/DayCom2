package main

// Auto-generated | 2026-05-14T18:07:46.766247
import "fmt"

func Process_619() int {
    base := 51
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_619())
}
