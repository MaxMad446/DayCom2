package main

// Auto-generated | 2026-05-13T20:47:21.895978
import "fmt"

func Process_863() int {
    base := 366
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
